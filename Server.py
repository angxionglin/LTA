import os
import firebase_admin
from firebase_admin import credentials, threading
from google.cloud import firestore
from firebase_admin import firestore
import paho.mqtt.client as mqtt
import requests, time
import mysql.connector
from mysql.connector import Error
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
from pandas import DataFrame

class MyHandler(FileSystemEventHandler):
    def on_any_event(self, event):
        print(event.event_type, event.src_path)

    def on_created(self, event):
        print("on_created", event.src_path)

    def on_deleted(self, event):
        print("on_deleted", event.src_path)

    def on_modified(self, event):
        # print("on_modified", event.src_path)
        print("SQL Database Modified...")
        result = executeSQLQuery("SELECT * FROM DLabRooms;")
        client.publish('LTAResult', payload=str(result), qos=0, retain=False)
        print("Published to LTAVerse\n")

    def on_moved(self, event):
        print("on_moved", event.src_path)

def on_connect(client, userdata, flags, rc):
    print(f"Connected with result code {rc}")
    client.subscribe("LTAQuery")

def on_message(client, userdata, msg):

    sqlQuery = (str(msg.payload.decode("utf-8")))
    print("SQL Query Received: " + sqlQuery)

    result = executeSQLQuery(sqlQuery)
    client.publish('LTAResult', payload=str(result), qos=0, retain=False)
    print("Published to LTAVerse\n")

def executeSQLQuery(query):
    try:
        connection = mysql.connector.connect(host = 'localhost', database = 'LTAVerse', user = 'pi', password = 'raspberry')

        if  connection.is_connected():
            db_Info = connection.get_server_info()
            print("Connected to MySQL Server version ", db_Info)
            cursor = connection.cursor()
            cursor.execute("select database();")
            record = cursor.fetchone()
            print("You're connected to database: ", record)
            cursor.execute(query)
            
            status = ""

            if "INSERT" in query:
                status += str(cursor.rowcount)
                status += " rows inserted."
            elif "SELECT" in query:
                status = DataFrame(cursor.fetchall()).values.tolist()
            elif "UPDATE" in query:
                status += str(cursor.rowcount)
                status += " record(s) affected."
            elif "DELETE" in query:
                status += str(cursor.rowcount)
                status += " record(s) deleted."
            else:
                status = "ERROR Not a condition Please check the source code of the Server.py"
                
            print(status)
            connection.commit()
            return status

    except Error as e:
        print("Error while connecting to MySQL", e)
        return str(e)
    finally:
        if connection.is_connected():
            cursor.close()
            connection.close()
            print("MySQL connection is closed")
    
def checkConnection():
    try:
        requests.get('https://www.google.com/')
        print("Connected to Internet")
        return True
    except:
        print("No Internet")
        time.sleep(1)
        return False
    
while(not checkConnection()):
    pass

event_handler = MyHandler()
observer = Observer()
observer.schedule(event_handler, path='/var/log/mysql', recursive=False)
observer.start()

client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message
client.connect("broker.emqx.io", 1883, 60)

client.loop_forever()




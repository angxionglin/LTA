# Server Using Raspberry Pi 4 Model B

---

## Getting connected with Raspberry Pi (Rpi)

### Sure work way
1) Find a 5V USB Typc-C Power Supply for the Rpi
2) Find a HDMI to Microusb Display Connector to connect it onto the monitor
3) Plug in a wired / wireless keyboard + mouse into the USB ports in the Raspberry Pi

---

## Remote connection Setup

### Setting up SSH

#### GUI Configuration Options

1) Click the **raspberry logo** at the top-left corner
2) Select **Preferences -> Raspberry Pi Configuration**

![image](https://user-images.githubusercontent.com/25051402/203454900-f114cefd-20f4-4d9d-8dde-be7f17215e52.png)

3) Navigate to the **Interfaces** tab in the configuration window
4) **Enable SSH** in the second line

![image](https://user-images.githubusercontent.com/25051402/203455015-c01160ba-9dac-4e90-965f-0e6a3c2683ab.png)

5) Click **OK** to save the changes

#### Terminal

##### 1st Way
1) Open the terminal on your Raspberry Pi and run the tool by typing: **sudo raspi-config**
2) Use the arrow on your keyboard to select **Interfacing Options**

![image](https://user-images.githubusercontent.com/25051402/203455152-a2cf0261-6cad-46fd-b8e4-6e98df916824.png)

3) Select the **P2 SSH** option on the list

![image](https://user-images.githubusercontent.com/25051402/203455204-da0f3786-f441-4e57-aae3-d32d050fceff.png)

4) Select **Yes** on the "Would you like the SSH Server to be enable?" prompt
5) Navigate down and select **Finish** to close the raspi-config
  
##### 2nd Way
1) Open the terminal on your Raspberry Pi and run the tool by typing: **sudo systemctl enable ssh**
2) Open the terminal on your Raspberry Pi and run the tool by typing: **sudo systemctl start ssh**


### Establishing SSH Connection

#### Using Terminal
1) Open up terminal in Windows / Mac
2) Enter **ssh pi@raspberrypi_ip_address** Eg. ssh pi@192.168.1.1

#### Using Putty

1) Download [Putty](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html)
2) Open up Putty
3) Enter the IP address of your device. Make sure SSH is selected, and port set to 22

![image](https://user-images.githubusercontent.com/25051402/203456723-640e56d1-dfe9-471f-8ce7-3dceb21b777d.png)

4) Click **Open** to start a new session
5) Enter your Rpi's username and password

---

## Setting up the Environment

### Installing Python

1) Go to the [python website](https://www.python.org/ftp/python/) to see which version of python you want to install
2) Open up terminal and type: "**wget https://www.python.org/ftp/python/3.7.0/Python-3.7.0.tgz**" change the python version to your required version
3) Extract the file content by typing: "**tar -zxvf Python-3.7.0.tgz**"
4) Go to the directory of your file by typing: "**cd Python-3.7.0**"
5) Configure Python on the Rpi by typing: "**./configure --enable-optimizations**" ensure that you're in the Python folder
6) After configuration, build the installation packages by typing: "**sudo make altinstall**"
7) Go to /usr/bin by typing: "**cd/usr/bin**"
8) List all the folder by typing: "**ls**"
9) Remove all the folder that contain python, some examples for removing python is: "**sudo rm python**" / "**sudo rm python3**"
10) Hard link the python into the directory by typing: "**sudo ln -s /usr/local/bin/python3.7 python**" and "**sudo ln -s /usr/local/bin/python3.7 python3**"
11) Check your python version by typing: "**python --version**" and "**python3 --version**"

### Getting the required Assets
Git Clone / Pull or Download as Zip in the following GitHub Repository

### Installing the required packages
Using the requirements.txt file you've downloaded, type "**pip install -r requirements.txt**"

### Testing the Script
Type "**python Server.py**" to run the script

## Setting up Crontab Jobs (Autorun Script Upon Boot/Reboot)

### Creating Shell Script

1) Go to the directory you want in terminal by using the command '**CD**'
2) nano <script name>.sh Eg. nano launcher.sh
3) Ensure the header got '**#!/bin/sh**'
4) Type the commands you want to run upon booting up. Reccommended to go the default directory upon startup

This is how the script should look like:

**#!/bin/sh**

**cd /**

**cd /home/pi**

**sudo python3 Server.py**

5) Remember to change the mode of the read, write, execute level of the shell script by typing '**chmod 755 launcher.sh**'
6) Now test the shell script by typing '**sh launcher.sh**'

### Adding into Crontab 

1) First create a log file by typing '**mkdir logs***'
2) Open up the crontab window by typing '**sudo crontab -e**
3) Navigate to the last line and add the job you want. For this is '**@reboot sh /home/pi/launcher.sh > /home/pi/logs/cronlog 2&&1**'
4) Test by rebooting by typing '**sudo reboot now**'
5) If it doesn't work, go to the logs and read the cronlog file

**Tips**
Find how to schedule Crontab jobs [here](https://crontab.guru/) and [here](https://www.tutorialspoint.com/unix_commands/crontab.htm)

### How to check Python Program is running

Type **ps -ef | grep python** in the terminal to list the process status of the Python Program/s

To kill the Python Program type **kill -9 pid** in the terminal where **pid** is the Program ID you saw in the terminal using the previous command.


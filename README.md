# Mirage Solo

## Installation of Necessary Softwares/Toolkits/Packages/Dependencies/SDK

### Getting the required Assets
Git Clone / Pull or Download as Zip in the following GitHub Repository

### Installation of Unity Hub
Unity Hub is required to open or run any of the Unity Projects. You can install them by clicking [here](https://public-cdn.cloud.unity3d.com/hub/prod/UnityHubSetup.exe) if not visit the official website [here](https://unity3d.com/get-unity/download)

### Choose your appropriate Unity Version that you need.
For this case we're using **2018.3.8f1** where you can find all the archive [here](https://unity3d.com/get-unity/download/archive)

Modules needed for Unity 2018.3.8f1 to Develop in Mirage Solo
- Android Build Support
- Windows Build Support
- Visual Studio (VS Community 2022 / 2019)

![image](https://user-images.githubusercontent.com/25051402/202063367-e9673c44-4de1-471e-9ff7-cbba742d6bef.png)
![image](https://user-images.githubusercontent.com/25051402/202063434-b4a84e67-eb67-49ed-9a7d-622c8588ba40.png)
![image](https://user-images.githubusercontent.com/25051402/202069544-22c610ac-2369-4651-b479-d9d7d111796b.png)

### Choose the Visual Studio you prefer to use
Tested with VS Community 2022 and VS Commmunity 2019. You can find these [here](https://visualstudio.microsoft.com/downloads/)

Go to Visual Studio Installer and Download the Necessary Workloads Stated Below

Under Desktop & Mobile Section
- Universal Windows Platform Development
- .NET Desktop Development
- Desktop Development with C++
- Mobile Development with .NET
- Mobile Development with C++

![image](https://user-images.githubusercontent.com/25051402/202063696-1e03853e-4275-48f5-8891-a2561c65bc2d.png)

Under Gaming
- Game Development with Unity
- Game development with C++ 

![image](https://user-images.githubusercontent.com/25051402/202063749-59494884-a446-42b5-8170-cb7988ff7e2b.png)

### Unity 3rd Party Packages

- [NuGetForUnity](https://github.com/GlitchEnzo/NuGetForUnity/releases/download/v3.0.5/NugetForUnity.3.0.5.unitypackage) 

### Asset from Unity Store
- [PUN 2 (Photon Engine)](https://assetstore.unity.com/packages/tools/network/pun-2-free-119922)
- [Photon Voice 2](https://assetstore.unity.com/packages/tools/audio/photon-voice-2-130518)

### Android Studio
- Download Android Studio [here](https://developer.android.com/studio)

### Android SDK
1) Open Android Studio
2) Go to Tools -> SDK Manager

![image](https://user-images.githubusercontent.com/25051402/202071467-ac9666d3-f83b-4d68-9cb2-96ae5f0dd9c3.png)

3) Go to Android SDK -> Android 8.0 

![image](https://user-images.githubusercontent.com/25051402/202072451-e5a9d2d3-a310-4e81-9f89-46f654fcad8d.png)

---

## Setting up the Working Environment

### Installing and Importing Packages in Unity

Ensure you have NuGet in Unity

![image](https://user-images.githubusercontent.com/25051402/202064903-980925b6-b459-4c00-a37f-1c8e395cf603.png)

If not, 
Install the NuGet for Unity by Assets -> Import Package -> Custom Package -> Select [NuGetForUnity](https://github.com/GlitchEnzo/NuGetForUnity/releases/download/v3.0.5/NugetForUnity.3.0.5.unitypackage) you've previously installed 

### Change the SDK to Android SDK

Go to Edit -> Preferences -> External Tools -> Browse -> 'C:\Users\USER\AppData\Local\Android\Sdk'

![image](https://user-images.githubusercontent.com/25051402/202065020-bc542fd6-beb6-46d1-b527-f5d01c40fa38.png)
![image](https://user-images.githubusercontent.com/25051402/202079818-b1c320a2-0913-4121-8cc2-700a18a8f0c0.png)

### Linking up Visual Studio and Unity for Auto Complete statements when coding / developing in Visual Studio

Go to Edit -> Preferences -> External Tools

Select the Visual Studio Version you prefer for the External Script Editor 

![image](https://user-images.githubusercontent.com/25051402/202065020-bc542fd6-beb6-46d1-b527-f5d01c40fa38.png)
![image](https://user-images.githubusercontent.com/25051402/202065233-5ecd4049-52c7-4e90-bf36-0f9feb9c22ab.png)

### Import from Asset Store

1) Window -> Asset Store

![image](https://user-images.githubusercontent.com/25051402/202076296-d64e731a-6127-451b-9b89-9f729c283e1e.png)

2) Enter the following Packages needed. Download and import them. If you've downloaded Navigate to 'My Assets'

![image](https://user-images.githubusercontent.com/25051402/202076680-62570f29-a805-42df-93cb-89b3dc7e58d7.png)

---

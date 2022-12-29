# Mobile iOS

---

## Installation of Necessary Softwares/Toolkits/Packages/Dependencies/SDK

### Getting the required Assets
Git Clone / Pull or Download as Zip in the following GitHub Repository

### Installation of Unity Hub
Unity Hub is required to open or run any of the Unity Projects. You can install them by clicking [here](https://public-cdn.cloud.unity3d.com/hub/prod/UnityHubSetup.exe) if not visit the official website [here](https://unity3d.com/get-unity/download)

### Choose your appropriate Unity Version that you need.
For this case we're using **2020.3.33f1** where you can find all the archive [here](https://unity3d.com/get-unity/download/archive)

### Choose the Visual Studio you prefer to use
Tested with VS Community 2022 and VS Commmunity 2019. You can find these [here](https://visualstudio.microsoft.com/downloads/)

Go to Visual Studio Installer and Download the Necessary Workloads Stated Below

### Asset from Unity Store
- [PUN 2 (Photon Engine)](https://assetstore.unity.com/packages/tools/network/pun-2-free-119922)
- [Photon Voice 2](https://assetstore.unity.com/packages/tools/audio/photon-voice-2-130518)

---

## Setting up the Working Environment from Downloaded Asset

### Opening Unity Project

1) Open Unity Hub
2) Open Project -> Select Downloaded Project

## Setting up the Working Environment from Scratch

### Creating the Project

1) Open Unity Hub
2) New Project -> 3D (Core)

### Linking up Visual Studio and Unity for Auto Complete statements when coding / developing in Visual Studio

Go to Edit -> Preferences -> External Tools

Select the Visual Studio Version you prefer for the External Script Editor 

Under the 'Generate .csproj files for' 
Check the following
- Embedded packages
- Local packages
- Registry packages
- Git packages
- Built-in packages
- Local tarball
- Packages from unknown source
- Player projects

![image](https://user-images.githubusercontent.com/25051402/201814555-b883820b-f0c9-43b9-8ba7-52a8ad66a7fb.png)
![image](https://user-images.githubusercontent.com/25051402/201815209-163efeb2-6fe6-4a0c-a076-237235f14db8.png)

### Switch Platform to iOS

Go to File -> Build Setting -> iOS

Download iOS in Unity Editor if it is not downloaded

### Copying the Asset from Mirage AR

1) Download and Open Mirage AR on Unity
2) Copy all Asset
3) Paste on the Unity Project you created
4) Remove/Replace all GVR Controller Dependent items

### Importing from Asset Store
1) Navigate to Window -> Package Manager

![image](https://user-images.githubusercontent.com/25051402/202076991-a4a89df1-87ba-4923-a074-391a836b5b9c.png)

2) Under the Packages, Select 'My Assets' -> Import / Reimport. For this instance is [PUN2](https://assetstore.unity.com/packages/tools/network/pun-2-free-119922) and [Photon Voice 2](https://assetstore.unity.com/packages/tools/audio/photon-voice-2-130518).
(If you do not have the assets, go to [Unity Asset Store](https://assetstore.unity.com/) and add it into your asset)

### Download Player Asset 

Download [Character/Avatar](https://assetstore.unity.com/packages/essentials/starter-assets-first-person-character-controller-196525) from Asset Store

1) Go to Unity Project
2) Window -> Package Manager -> My Assets -> Starter Assets - First Person Character Controller -> Download -> Import
![image](https://user-images.githubusercontent.com/25051402/209898307-80d197c4-2b5f-495e-9a01-c288ed665b9b.png)

Drag and Drop the player into the Hierarchy and Tune the settings to suit your program/app.

### Deploying the Project

1) File -> Build Setting -> iOS -> Build
2) Open your folder you built in xCode, make sure it is the version in compatible. You can check it [here](https://developer.apple.com/support/xcode/)
3) Under your **Targets**, choose your **Project**
4) Under **Signing & Capabilities**, ensure **Automatic manage signing is checked**
![Pic 1](https://user-images.githubusercontent.com/25051402/209914293-947de7b9-983c-4833-a3e8-80cae1a3163e.jpg)
5)  Under your **Targets**, choose your **UnityFramework** 
6)  Ensure For **For install build only** is checked
![Pic 2](https://user-images.githubusercontent.com/25051402/209914612-2123c59d-f05d-48e2-85cf-426398604f2c.jpg)
7)  Plug in an iOS Device with a cable that allows data transfer
8)  Build and Run your Project







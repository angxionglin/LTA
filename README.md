# This is for the Hololens 2 (HARP)

---

## Installation of Necessary Softwares/Toolkits/Packages/Dependencies/SDK

### Getting the required Assets

Git Clone / Pull or Download as Zip in the following GitHub Repository

### Installation of Window SDK
Install the Window SDK (Version 10.0.19041.0) needed for Hololens 2. Click [here](https://go.microsoft.com/fwlink/?linkid=2120843) to download if not find the references [here](https://developer.microsoft.com/en-us/windows/downloads/sdk-archive/)

### Installation of Unity Hub
Unity Hub is required to open or run any of the Unity Projects. You can install them by clicking [here](https://public-cdn.cloud.unity3d.com/hub/prod/UnityHubSetup.exe) if not visit the official website [here](https://unity3d.com/get-unity/download)

### Choose your appropriate Unity Version that you need.
For this case we're using **2022.3.33f1** where you can find all the archive [here](https://unity3d.com/get-unity/download/archive)

Modules needed for Unity 2022.3.33f1 to Develop in Hololens 2
- Universal Windows Platform Build Support
- Windows Build Support
- Visual Studio (VS Community 2022 / 2019)

![image](https://user-images.githubusercontent.com/25051402/201806064-b90d99e9-ae9a-4ba3-bff0-f3c956019f6e.png)
![image](https://user-images.githubusercontent.com/25051402/201806166-feb51ed6-af68-427a-b5cd-2b279643137e.png)
![image](https://user-images.githubusercontent.com/25051402/201806250-29ca0947-71f9-409d-9ca0-0ff73720eaf7.png)

### Choose the Visual Studio you prefer to use
Tested with VS Community 2022 and VS Commmunity 2019. You can find these [here](https://visualstudio.microsoft.com/downloads/)

Go to Visual Studio Installer and Download the Necessary Workloads Stated Below

Under Desktop & Mobile Section
- Universal Windows Platform Development
- .NET Desktop Development
- Desktop Development with C++
![image](https://user-images.githubusercontent.com/25051402/201803875-bfa8e8e3-a7d1-469f-b146-a69d337741cd.png)

Under Gaming
- Game Development with Unity
- Game development with C++ 
![image](https://user-images.githubusercontent.com/25051402/201804092-12f338fd-ff86-4305-af80-c1b1605f9223.png)

### Install MRTK

[MRTK-Unity](https://learn.microsoft.com/en-us/windows/mixed-reality/mrtk-unity/mrtk2/?view=mrtkunity-2022-05) is a Microsoft-driven project that provides a set of components and features, used to accelerate cross-platform MR app development in Unity.

You can download the Feature Tool [here](https://www.microsoft.com/en-us/download/details.aspx?id=102778)

To know about the MRTK Toolkit you can read it up [here](https://learn.microsoft.com/en-us/windows/mixed-reality/develop/unity/welcome-to-mr-feature-tool)

### Unity 3rd Party Packages

- [NuGetForUnity](https://github.com/GlitchEnzo/NuGetForUnity/releases/download/v3.0.5/NugetForUnity.3.0.5.unitypackage) 
- [Spatial Anchor Asset 1](https://github.com/microsoft/MixedRealityLearning/releases/download/getting-started-v2.4.0/MRTK.HoloLens2.Unity.Tutorials.Assets.GettingStarted.2.4.0.unitypackage)
- [Spatial Anchor Asset 2](https://github.com/microsoft/MixedRealityLearning/releases/download/azure-spatial-anchors-v2.5.3.1/MRTK.HoloLens2.Unity.Tutorials.Assets.AzureSpatialAnchors.XRplugginManagement.2.5.3.unitypackage)

---

## Setting up the Working Environment

### Mixed Reality Feature Tool
1) Open up the Mixed Reality Feature Tool
![image](https://user-images.githubusercontent.com/25051402/201810112-bb0d181c-d9a8-4479-b645-c73509794277.png)
2) Select the Github Clone / Pull File
![image](https://user-images.githubusercontent.com/25051402/201810046-ff299027-b204-4fec-9d6e-f1d2adf9b390.png)
3) Discover Feature and Ensure the Following is Installed

 **Azure Mixed Reality Services**
 - Microsoft Azure Object Anchors        (Version 0.22.0)
 - Azure Spatial Anchors SDK Core        (Version 2.13.0)
 - Azure Spatial Anchors SDK for Windows (Version 2.13.0)

 **Mixed Reality Toolkit**
 - Mixed Reality Toolkit Examples        (Version 2.8.0)
 - Mixed Reality Toolkit Extensions      (Version 2.8.0)
 - Mixed Reality Toolkit Foundation      (Version 2.8.0)
 - Mixed Reality Toolkit Standard Assets (Version 2.8.0)
 - Mixed Reality Toolkit Test Utilities  (Version 2.8.0)
 - Mixed Reality Toolkit Tools           (Version 2.8.0)

 **MRTK3**
 - MRTK Graphics Tools                   (Version 0.4.0)

 **Platform Support**
 - Mixed Reality OpenXR Plugin           (Version 1.4.0)
 - Mixed Reality Scene Understanding     (Version 0.6.0)

 **Spatial Audio**
 - Microsoft Spatializer                 (Version 1.0.246)

![image](https://user-images.githubusercontent.com/25051402/201811577-f0673574-dc0e-48be-ad18-c9d46d15b771.png)

5) Follow the remaining steps to install the necessary packages

### Installing and Importing Packages in Unity

Ensure you have NuGet in Unity

![image](https://user-images.githubusercontent.com/25051402/201816239-0c8e1cbd-954e-4f4a-a26a-61c2901c4c41.png)

If not, 
Install the NuGet for Unity by Assets -> Import Package -> Custom Package -> Select [NuGetForUnity](https://github.com/GlitchEnzo/NuGetForUnity/releases/download/v3.0.5/NugetForUnity.3.0.5.unitypackage) you've previously installed 

Go to NuGet -> Manage Nuget Packages -> **Installed** Tab

Make sure the following is there if not navigate back to the **Online** Tab and install it
- Microsoft.MixedReality.QR
- Microsoft.Rest.ClientRuntime
- Microsoft.VCRTForwarders.140
- Microsoft.Windows.MixedReality.DotNetWINRT
- Newtonsoft.Json
- OpenCV

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

### Setting up the Build Settings in Unity

Go to Files -> Build Settings -> Select Universal Windows Platform (Switch Platform if you haven't)

Follow the Configuration 
- Target Device:            Hololens
- Architecture:             ARM64
- Target SDK Version:       Choose the one installed, for this case is 10.0.19041.0
- Minimum Platform Version: Choose the lowest, for this case is 10.0.10240.0
- Visual Studio Version:    Your Preference, for this case is Latest Installed
- Build and Run on:         USB Device
- Build Configuration:      **Release**

Check Development Build

Rest just leave it as it is

![image](https://user-images.githubusercontent.com/25051402/201820544-46ac0db9-c367-45b2-97c9-173487debf05.png)

--- 

## References

---



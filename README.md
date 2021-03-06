# TelloForUnity

DJI Tello application development resources for Unity.

## Note

This project is including the following modules.
* Modified source code of [TelloLib](https://github.com/Kragrathea/TelloLib)
* Modified source code of [NativeRenderingPlugin](https://bitbucket.org/Unity-Technologies/graphicsdemos/src/default/NativeRenderingPlugin/)
* Pre-built DLLs for Windows 64 bit of [FFmpeg](https://www.ffmpeg.org/)

At this time, Windows 64 bit and macOS 64 bit version only.


## Installation

### Windows Specific Settings

Please confirm the Windows Firewall settings of your Unity Editor. Plublic network access is required to access the video stream from Tello.

![image.png](https://qiita-image-store.s3.amazonaws.com/0/39561/6e7de478-cbd8-be4f-1687-2f43135f9c10.png)

### macOS Specific Settings

* Before using, ```brew install x264 ffmpeg``` is required.

## Basic Usage

* Open the TelloUnityDemo project into Unity Editor.
* Edit > Project Settings > Player > Other Settings > "Scripting Runtime Version" as ".NET 4.x Equiverent".
* Open the Scenes/Master scene.
* Connect to Tello Wi-Fi.
* Play.
* Key assignments and Tello's battery status are displayed in the Game window.

## Legal Information

* [FFmpeg License and Legal Considerations](https://www.ffmpeg.org/legal.html)

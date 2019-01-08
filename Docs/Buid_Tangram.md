## System requirements
- A 64-bit Intel machine with at least 8GB of RAM.
- At least 50GB of free disk space on.
- An appropriate version of Visual Studio, as described below.
- Windows 10 or newer.
## Setting up Windows
### Visual Studio
Install Visual Studio Community 2017 from https://www.visualstudio.com/downloads/.   
Necessary installation options
```
--.NET desktop development
--Desktop development with C++
  --Visual C++ MFC for x86 and x64
  --C++/CLI support
--Office/SharePoint development
--Microsoft Visual Studio 2017 Installer Projects
```
### Git
Install Git from https://git-scm.com/downloads.  
Configure Git:
```
$ git config --global user.name "My Name"
$ git config --global user.email "my-name@chromium.org"
$ git config --global core.autocrlf false
$ git config --global core.filemode false
$ git config --global branch.autosetuprebase always
```

## Install Tangram
Download the appropriate version of the tangram version and the corresponding symbol library from https://github.com/TangramDev/Tangram/releases, and install it on your computer

## Build

### For C# Users
You can start with the example project LaunchPad，the LaunchPad instructions at https://github.com/TangramDev/LaunchPad.
1. Get the example project code.
```
git clone https://github.com/TangramDev/LaunchPad.git
```
2. Open **{{LaunchPad Root Directory}}\LaunchPad.csproj**, build.    
3. Debug LaunchPad project.

### For C++ Users
1. Get LanunchPad code  
```
git clone https://github.com/TangramDev/LaunchPad.git
```
then Open **{{LaunchPad Root Directory}}\LaunchPad.csproj**, build. 

2. Get Core code 
```
git clone https://github.com/TangramDev/Core.git
```
then Open **{{Tangram Root Directory}}\Build\TangramCore.sln**, build **TangramCore** and **TangramCLR**.  
3. Debug

### For Advanced Users
If you want to understand the code of tangram in a deeper way, or want to contribute code, then you need to look at the following documents.
- [Build Tangram with Symbols](https://github.com/TangramDev/Tangram/blob/master/Docs/Build_Tangram_with_Symbols.md) --Quickly debug tangram and chrome code without spending a lot of time compiling Chrome
- [Build Tangram with Chromium](https://github.com/TangramDev/Tangram/blob/master/Docs/Build_Tangram_with_Chromium.md) --Advanced build instructions include tangram related libraries, chromium .


# Build Tangram Full
## System requirements
- A 64-bit Intel machine with at least 8GB of RAM. More than 16GB is highly recommended.
- At least 100GB of free disk space on an NTFS-formatted hard drive. FAT32 will not work, as some of the Git packfiles are larger than 4GB.
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
## Get the code
### Chromium
Tangram is based on Chromium, so need to get the chromium code according to https://chromium.googlesource.com/chromium/src/+/master/docs/windows_build_instructions.md#get-the-code

### Chromium patches
1. Get the tangram code
```
git clone https://github.com/TangramDev/Tangram.git
```
2. Copy `chromium_patches/71.0.3578.80` into **{{Chromium Root Directory}}\src\**

### TangramCore
Core is the core component of the Tangram system. It provides basic interface rendering, event forwarding, message pipeline, process management and language runtime support.
```
git clone https://github.com/TangramDev/Core.git
```

### LaunchPad
An extension panel located on the left side of the Tangram browser.
```
git clone https://github.com/TangramDev/LaunchPad.git
```

## Build Tangram
### Build TangramCore
> Please run Visual Studio as an administrator.  

Open **{{Tangram Root Directory}}\Build\TangramCore.sln**, build **TangramCore** and **TangramCLR**.

### Build LaunchPad
Open **{{LaunchPad Root Directory}}\LaunchPad.csproj**, build .







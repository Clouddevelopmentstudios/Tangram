# Checking out and Building Chromium for Windows
## System requirements
- A 64-bit Intel machine with at least 8GB of RAM. More than 16GB is highly recommended.
- At least 100GB of free disk space on an NTFS-formatted hard drive. FAT32 will not work, as some of the Git packfiles are larger than 4GB.
- An appropriate version of Visual Studio, as described below.
- Windows 7 or newer.
## Setting up Windows
### Visual Studio
Chromium requires Visual Studio 2017 (>=15.7.2) or 2019 (>=16.0.0) to build. The clang-cl compiler is used but Visual Studio's header files, libraries, and some tools are required. Visual Studio Community Edition should work if its license is appropriate for you. You must install the “Desktop development with C++” component and the “MFC/ATL support” sub-components. This can be done from the command line by passing these arguments to the Visual Studio installer (see below for ARM64 instructions):
```
$ PATH_TO_INSTALLER.EXE ^
--add Microsoft.VisualStudio.Workload.NativeDesktop ^
--add Microsoft.VisualStudio.Component.VC.ATLMFC ^
--includeRecommended
```

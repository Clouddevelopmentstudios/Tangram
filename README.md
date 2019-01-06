# Tangram

Tangram is a Chromium-based Cloud App Browser. Tangram supports building web-style desktop applications. Bring components developed with desktop technology into the browser tab. And add background page support for standalone desktop apps. Tangram makes your desktop application as easy to install as a website and enjoys dynamic updates.

We have retained the full features of Chromium. You can still use Tangram like a traditional web browser. In particular, we have added a new set of DOM elements and Javascript objects to the browser. This allows you to integrate rich desktop resources into the web environment.

## Bring desktop component into the browser tab

Tangram can build hybrid interface similar to the screenshot below.

![Capture](Capture.png)

In this scenario, desktop components can communicate with web pages. Pass data or respond to events. Tangram supports a wide range of desktop component types, including .NET Winform, .NET WPF, Windows UWP, Java SWT and Java Swing.

## Operating environment

Runs on Windows 10 with .NET Framework 4.0+, 32/64-bit.  
Based on Chromium 71.

## Supported component types

| Component Types | Status |
|-----------------|--------|
| .NET Winform Control | Full support |
| HTML Page | Support based on the Tangram browser |
| .NET WPF | Untested |
| Windows UWP | Untested |
| Win32 | Untested |
| MFC CWnd | Untested |
| Java SWT | Untested |

## Documentation

- [Learn about the extension panel on the left.](https://github.com/TangramDev/LaunchPad)
- [API Reference](/Docs/API_Reference.md)
- [Customize the launch page.](/Docs/LocalNTP.md)
- [Build and publish your own private Tangram browser.](/Docs/Build_Instructions(Windows).md)

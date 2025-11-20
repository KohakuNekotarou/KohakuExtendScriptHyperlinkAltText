# InDesign Plug-In

**I'll add various things to ExtendScript.**
<br>**Let's learn the InDesign SDK together.**

We cannot be held responsible for any issues arising from your use of this service.<br>
Please use it at your own risk.<br>

On Mac, you cannot use downloaded plug-ins directly.<br>
https://helpx.adobe.com/jp/indesign/kb/indesign-and-macos-catalina.html<br>
Refer to the above and use Terminal to<br>
sudo xattr -r -d com.apple.quarantine /Applications/Adobe\ Indesign\ 2025/Plug-ins/KohakuExtendScriptHyperlinkAltText.InDesignPlugin<br>
Please execute.

## extendScript for JavaScript
```
// Hyperlink alt text.
hyperlinkAltText = app.activeDocument.hyperlinks[0].keshatHyperlinkAltText;
app.activeDocument.hyperlinks[0].keshatHyperlinkAltText = "Kohaku"
```

For build instructions, please refer to this guide.<br>
https://github.com/KohakuNekotarou/KohakuExtendScriptLayoutViewLocation

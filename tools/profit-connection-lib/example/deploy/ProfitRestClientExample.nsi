
; The name of the installer
Name "ProfitRestClientExample"

; The file to write
OutFile "ProfitRestClientExample-installer.exe"

; The default installation directory
InstallDir $PROGRAMFILES\ProfitRestClientExample

; Registry key to check for directory (so if you install again, it will 
; overwrite the old one automatically)
InstallDirRegKey HKLM "Software\OpenSoft_ProfitRestClientExample" "Install_Dir"

; Request application privileges for Windows Vista
RequestExecutionLevel admin

;--------------------------------
VIProductVersion                 "1.0.0.0"
VIAddVersionKey ProductName      "ProfitRestClientExample"
VIAddVersionKey Comments         "ProfitRestClientExample"
VIAddVersionKey CompanyName      "OpenSoft"
VIAddVersionKey LegalCopyright   "OpenSoft Technologies"
VIAddVersionKey FileDescription  "Fat client for ProFIT stations"
VIAddVersionKey FileVersion      1
VIAddVersionKey ProductVersion   1
VIAddVersionKey InternalName     "ProfitRestClientExample"
VIAddVersionKey LegalTrademarks  ""
VIAddVersionKey OriginalFilename "ProfitRestClientExample.exe"

;--------------------------------

; Pages
Page components
Page directory
Page instfiles

UninstPage uninstConfirm
UninstPage instfiles
 
;--------------------------------

; The stuff to install
Section "ProfitRestClientExample (required)"

  SectionIn RO
  
  ; Set output path to the installation directory.
  SetOutPath $INSTDIR
  
  ; Put file there
  File "ProfitRestClientExample.exe"
  File "icudt51.dll"
  File "icuin51.dll"
  File "icuuc51.dll"
  File "libgcc_s_dw2-1.dll"
  File "libstdc++-6.dll"
  File "libwinpthread-1.dll"
  File "Qt5Core.dll"
  File "Qt5Gui.dll"
  File "Qt5Network.dll"
  File "Qt5Qml.dll"
  File "Qt5Quick.dll"
  File "Qt5Sql.dll"
  File "Qt5Svg.dll"
  File "Qt5Widgets.dll"
  File "ssleay32.dll"
  File "libeay32.dll"
  
  SetOutPath $INSTDIR\accessible
  File /r "accessible\*.*"
  SetOutPath $INSTDIR\bearer
  File /r "bearer\*.*"
  SetOutPath $INSTDIR\designer
  File /r "designer\*.*"
  SetOutPath $INSTDIR\iconengines
  File /r "iconengines\*.*"
  SetOutPath $INSTDIR\imageformats
  File /r "imageformats\*.*"
  SetOutPath $INSTDIR\mediaservice
  File /r "mediaservice\*.*"
  SetOutPath $INSTDIR\platforms
  File /r "platforms\*.*"
  SetOutPath $INSTDIR\playlistformats
  File /r "playlistformats\*.*"
  SetOutPath $INSTDIR\position
  File /r "position\*.*"
  SetOutPath $INSTDIR\printsupport
  File /r "printsupport\*.*"
  SetOutPath $INSTDIR\qml1tooling
  File /r "qml1tooling\*.*"
  SetOutPath $INSTDIR\qmltooling
  File /r "qmltooling\*.*" 
  SetOutPath $INSTDIR\QtGraphicalEffects
  File /r "QtGraphicalEffects\*.*"
  SetOutPath $INSTDIR\QtQml
  File /r "QtQml\*.*"
  SetOutPath $INSTDIR\QtQuick
  File /r "QtQuick\*.*"
  SetOutPath $INSTDIR\QtQuick.2
  File /r "QtQuick.2\*.*"
  SetOutPath $INSTDIR\sensorgestures
  File /r "sensorgestures\*.*"
  SetOutPath $INSTDIR\sensors
  File /r "sensors\*.*"
  SetOutPath $INSTDIR\sqldrivers
  File /r "sqldrivers\*.*"
  
  SetOutPath $INSTDIR
  
  ; Write the installation path into the registry
  WriteRegStr HKLM SOFTWARE\OpenSoft_ProfitRestClientExample "Install_Dir" "$INSTDIR"
  
  ; Write the uninstall keys for Windows
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\ProfitRestClientExample" "DisplayName" "OpenSoft ProfitRestClientExample"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\ProfitRestClientExample" "UninstallString" '"$INSTDIR\uninstall.exe"'
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\ProfitRestClientExample" "NoModify" 1
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\ProfitRestClientExample" "NoRepair" 1
  WriteUninstaller "uninstall.exe"
  
SectionEnd

; Optional section (can be disabled by the user)
Section "Start Menu Shortcuts"

  CreateShortCut "$DESKTOP\ProfitRestClientExample.lnk" "$INSTDIR\ProfitRestClientExample.exe" "" "$INSTDIR\ProfitRestClientExample.exe" 0
  CreateDirectory "$SMPROGRAMS\ProfitRestClientExample"
  CreateShortCut "$SMPROGRAMS\ProfitRestClientExample\Uninstall.lnk" "$INSTDIR\uninstall.exe" "" "$INSTDIR\uninstall.exe" 0
  CreateShortCut "$SMPROGRAMS\ProfitRestClientExample\ProfitRestClientExample.lnk" "$INSTDIR\ProfitRestClientExample.exe" "" "$INSTDIR\ProfitRestClientExample.exe" 0
  
SectionEnd

;--------------------------------

; Uninstaller

Section "Uninstall"
  
  ; Remove registry keys
  DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\ProfitRestClientExample"
  DeleteRegKey HKLM SOFTWARE\OpenSoft_ProfitRestClientExample

  ; Remove files and uninstaller
  Delete  $INSTDIR\*.*
  Delete  $DESKTOP\ProfitRestClientExample.lnk

  ; Remove shortcuts, if any
  Delete "$SMPROGRAMS\ProfitRestClientExample\*.*"

  ; Remove directories used
  RMDir "$SMPROGRAMS\ProfitRestClientExample"
  RMDir /r "$INSTDIR"

SectionEnd

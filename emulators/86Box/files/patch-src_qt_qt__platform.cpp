--- src/qt/qt_platform.cpp.orig	2023-06-24 18:56:23 UTC
+++ src/qt/qt_platform.cpp
@@ -102,7 +102,7 @@ extern "C" {
 #include <86box/rom.h>
 #include <86box/config.h>
 #include <86box/ui.h>
-#include <86box/discord.h>
+//#include <86box/discord.h>
 
 #include "../cpu/cpu.h"
 #include <86box/plat.h>
@@ -376,7 +376,7 @@ plat_pause(int p)
     } else {
         ui_window_title(oldtitle);
     }
-    discord_update_activity(dopause);
+    //discord_update_activity(dopause);
     QTimer::singleShot(0, main_window, &MainWindow::updateUiPauseState);
 
 #ifdef Q_OS_WINDOWS

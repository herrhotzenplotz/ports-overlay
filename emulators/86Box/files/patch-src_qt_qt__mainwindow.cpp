--- src/qt/qt_mainwindow.cpp.orig	2023-06-24 18:53:44 UTC
+++ src/qt/qt_mainwindow.cpp
@@ -39,7 +39,7 @@ extern "C" {
 #include <86box/keyboard.h>
 #include <86box/plat.h>
 #include <86box/ui.h>
-#include <86box/discord.h>
+//#include <86box/discord.h>
 #include <86box/device.h>
 #include <86box/video.h>
 #include <86box/machine.h>
@@ -2275,12 +2275,12 @@ MainWindow::on_actionPreferences_triggered()
 void
 MainWindow::on_actionEnable_Discord_integration_triggered(bool checked)
 {
-    enable_discord = checked;
-    if (enable_discord) {
-        discord_init();
-        discord_update_activity(dopause);
-    } else
-        discord_close();
+//    enable_discord = checked;
+//    if (enable_discord) {
+//        discord_init();
+//        discord_update_activity(dopause);
+//    } else
+//        discord_close();
 }
 
 void

--- src/qt/qt_main.cpp.orig	2023-06-24 18:51:40 UTC
+++ src/qt/qt_main.cpp
@@ -52,7 +52,7 @@ extern "C" {
 #include <86box/plat.h>
 #include <86box/ui.h>
 #include <86box/video.h>
-#include <86box/discord.h>
+//#include <86box/discord.h>
 #include <86box/gdbstub.h>
 }
 
@@ -196,7 +196,7 @@ main(int argc, char *argv[])
         return 0;
     }
 
-    discord_load();
+    //discord_load();
 
     main_window = new MainWindow();
     if (startMaximized) {
@@ -271,12 +271,13 @@ main(int argc, char *argv[])
     /* Set the PAUSE mode depending on the renderer. */
     // plat_pause(0);
     QTimer onesec;
-    QTimer discordupdate;
+    //QTimer discordupdate;
     QObject::connect(&onesec, &QTimer::timeout, &app, [] {
         pc_onesec();
     });
     onesec.setTimerType(Qt::PreciseTimer);
     onesec.start(1000);
+/*
     if (discord_loaded) {
         QTimer::singleShot(1000, &app, [] {
             if (enable_discord) {
@@ -290,6 +291,7 @@ main(int argc, char *argv[])
         });
         discordupdate.start(1000);
     }
+*/
 
     /* Initialize the rendering window, or fullscreen. */
     QTimer::singleShot(0, &app, [] {

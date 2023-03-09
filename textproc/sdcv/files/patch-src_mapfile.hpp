--- src/mapfile.hpp.orig	2023-03-09 10:12:02 UTC
+++ src/mapfile.hpp
@@ -9,6 +9,7 @@
 #include <sys/mman.h>
 #include <sys/stat.h>
 #include <sys/types.h>
+#include <unistd.h>
 #endif
 #ifdef _WIN32
 #include <windows.h>

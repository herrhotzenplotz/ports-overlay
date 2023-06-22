--- src/include/86box/plat_dir.h.orig	2023-06-21 12:48:17 UTC
+++ src/include/86box/plat_dir.h
@@ -65,6 +65,8 @@ extern void           seekdir(DIR *, long);
 extern int            closedir(DIR *);
 
 #    define rewinddir(dirp) seekdir(dirp, 0L)
+#elif defined(__unix__)
+#	include <dirent.h>
 #else
 /* On linux and macOS, use the standard functions and types */
 #    include <sys/dir.h>

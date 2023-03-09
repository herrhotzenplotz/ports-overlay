--- src/sdcv.cpp.orig	2023-03-09 10:41:41 UTC
+++ src/sdcv.cpp
@@ -141,7 +141,7 @@ try {
             if (stardict_data_dir)
                 data_dir = stardict_data_dir;
             else
-                data_dir = "/usr/share/stardict/dic";
+                data_dir = "/usr/local/share/stardict/dic";
         }
     } else {
         data_dir = get_impl(opt_data_dir);

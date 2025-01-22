--- kcollectd/rrd_interface.cc.orig	2025-01-21 14:03:45 UTC
+++ kcollectd/rrd_interface.cc
@@ -48,7 +48,7 @@ static inline rrd_info_t *rrd_info(int, const std::str
   filename.copy(c_file, std::string::npos);
   c_file[filename.length()] = 0;
   char *arg[] = {0, c_file, 0};
-  rrd_info_t *result = rrd_info(2, arg);
+  rrd_info_t *result = rrd_info(2, (char const **)arg);
   free(c_file);
   return result;
 }

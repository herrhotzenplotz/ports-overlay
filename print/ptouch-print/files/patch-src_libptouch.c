--- src/libptouch.c.orig	2021-10-11 08:18:49 UTC
+++ src/libptouch.c
@@ -266,7 +266,7 @@ int ptouch_getstatus(ptouch_dev ptdev)
 int ptouch_getstatus(ptouch_dev ptdev)
 {
 	char cmd[]="\x1biS";	/* 1B 69 53 = ESC i S = Status info request */
-	uint8_t buf[32];
+	uint8_t buf[32] = {0};
 	int i, r, tx=0, tries=0;
 	struct timespec w;
 

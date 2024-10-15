--- include/ptouch.h.orig	2024-10-15 17:04:43 UTC
+++ include/ptouch.h
@@ -18,7 +18,7 @@
 */
 
 #include <stdint.h>
-#include <libusb-1.0/libusb.h>
+#include <libusb.h>
 
 struct _pt_tape_info {
 	uint8_t mm;		/* Tape width in mm */

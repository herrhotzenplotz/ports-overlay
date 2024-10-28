--- src/ptouch-print.c.orig	2021-10-11 08:18:49 UTC
+++ src/ptouch-print.c
@@ -89,7 +89,10 @@ int print_img(ptouch_dev ptdev, gdImage *im)
 		printf(_("maximum printing width for this tape is %ipx\n"), tape_width);
 		return -1;
 	}
-	offset=64-(gdImageSY(im)/2);	/* always print centered  */
+	//offset=64-(gdImageSY(im)/2);	/* always print centered  */
+	size_t max_pixels=ptouch_get_max_width(ptdev);
+	offset=((int)max_pixels / 2)-(gdImageSY(im)/2);	/* always print centered  */
+	printf("max_pixels=%d, offset=%d\n", max_pixels, offset);
 	if ((ptdev->devinfo->flags & FLAG_RASTER_PACKBITS) == FLAG_RASTER_PACKBITS) {
 		if (debug) {
 			printf("enable PackBits mode\n");
@@ -277,10 +280,18 @@ gdImage *render_text(char *font, char *line[], int lin
 	if (debug) {
 		printf("debug: needed (max) height is %ipx\n", max_height);
 	}
+	if ((max_height * lines) > tape_width) {
+		printf("Font size %d too large for %d lines\n", fsz, lines);
+		return NULL;
+	}
+	/* calculate unused pixels */
+	int unused_px = tape_width - (max_height * lines);
 	/* now render lines */
 	for (i=0; i<lines; i++) {
 		int ofs=get_baselineoffset(line[i], font_file, fsz);
-		int pos=((i)*(tape_width/(lines)))+(max_height)-ofs-1;
+		//int pos=((i)*(tape_width/(lines)))+(max_height)-ofs-1;
+		int pos=((i)*(tape_width/(lines)))+(max_height)-ofs;
+		pos += (unused_px/lines) / 2;
 		if (debug) {
 			printf("debug: line %i pos=%i ofs=%i\n", i+1, pos, ofs);
 		}

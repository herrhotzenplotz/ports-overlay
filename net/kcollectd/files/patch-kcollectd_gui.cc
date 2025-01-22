--- kcollectd/gui.cc.orig	2025-01-21 14:10:53 UTC
+++ kcollectd/gui.cc
@@ -133,7 +133,7 @@ static void recurseTree(QTreeWidgetItem *item,
     while (childNumber + 1 < item->childCount()) {
       QTreeWidgetItem *newchild = item->child(childNumber + 1);
       QString newchildstr = newchild->text(0);
-      int endsearch = std::min(lastpos + 1, newchildstr.length());
+      int endsearch = std::min((int)(lastpos + 1), (int)(newchildstr.length()));
       bool abort = true;
       int newlastpos = -1;
 

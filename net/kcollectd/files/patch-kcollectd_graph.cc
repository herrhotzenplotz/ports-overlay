--- kcollectd/graph.cc.orig	2025-01-21 14:05:14 UTC
+++ kcollectd/graph.cc
@@ -770,8 +770,8 @@ void Graph::mousePressEvent(QMouseEvent *e) {
  * Qt mouse-press-event
  */
 void Graph::mousePressEvent(QMouseEvent *e) {
-  origin_x = qRound(e->position().x());
-  origin_y = qRound(e->position().y());
+  origin_x = qRound(e->windowPos().x());
+  origin_y = qRound(e->windowPos().y());
 
   origin_start = data_start;
   origin_end = data_end;
@@ -785,7 +785,7 @@ void Graph::mousePressEvent(QMouseEvent *e) {
     // context-menu
     QMenu menu(this);
 
-    graph_list::iterator s_graph = graphAt(e->position().toPoint());
+    graph_list::iterator s_graph = graphAt(e->windowPos().toPoint());
 
     menu.addAction(QIcon("list-add"), i18n("add new subgraph"), this,
                    SLOT(splitGraph()));
@@ -803,7 +803,7 @@ void Graph::mousePressEvent(QMouseEvent *e) {
       }
     }
 
-    QAction *action = menu.exec(e->globalPosition().toPoint());
+    QAction *action = menu.exec(e->globalPos());
 
     actionmap::iterator result = acts.find(action);
     if (result != acts.end()) {
@@ -824,8 +824,8 @@ void Graph::mouseMoveEvent(QMouseEvent *e) {
     if (autoUpdateTimer != -1)
       return;
 
-    int x = qRound(e->position().x());
-    int y = qRound(e->position().y());
+    int x = qRound(e->windowPos().x());
+    int y = qRound(e->windowPos().y());
 
     if ((x < graph_rect.left()) || (x >= graph_rect.right()))
       return;
@@ -898,7 +898,7 @@ void Graph::dragMoveEvent(QDragMoveEvent *event) {
   if (glist.size() == 0) {
     event->accept(contentsRect());
   } else {
-    graph_list::iterator i = graphAt(event->position().toPoint());
+    graph_list::iterator i = graphAt(event->pos());
     if (i != end()) {
       QRect g;
       g.setCoords(contentsRect().left(), i->top(), contentsRect().right(),
@@ -922,7 +922,7 @@ void Graph::dropEvent(QDropEvent *event) {
   event->acceptProposedAction();
   const int numgraphs = glist.size();
   if (numgraphs) {
-    graph_list::iterator target = graphAt(event->position().toPoint());
+    graph_list::iterator target = graphAt(event->pos());
     if (target != end()) {
       target->add(mimeData->rrd(), mimeData->ds(), mimeData->label());
     } else {

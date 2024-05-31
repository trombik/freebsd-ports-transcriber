--- lib/open_jtalk/src/mecab/src/viterbi.cpp.orig	2023-11-05 02:02:12 UTC
+++ lib/open_jtalk/src/mecab/src/viterbi.cpp
@@ -318,11 +318,11 @@ template <bool IsAllPath> bool connect(size_t pos, Nod
                                        const Connector *connector,
                                        Allocator<Node, Path> *allocator) {
   for (;rnode; rnode = rnode->bnext) {
-    register long best_cost = 2147483647;
+    long best_cost = 2147483647;
     Node* best_node = 0;
     for (Node *lnode = end_node_list[pos]; lnode; lnode = lnode->enext) {
-      register int lcost = connector->cost(lnode, rnode);  // local cost
-      register long cost = lnode->cost + lcost;
+      int lcost = connector->cost(lnode, rnode);  // local cost
+      long cost = lnode->cost + lcost;
 
       if (cost < best_cost) {
         best_node  = lnode;

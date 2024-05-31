--- lib/open_jtalk/src/mecab/src/darts.h.orig	2023-11-05 02:02:12 UTC
+++ lib/open_jtalk/src/mecab/src/darts.h
@@ -404,10 +404,10 @@ class DoubleArrayImpl {
     T result;
     set_result(result, -1, 0);
 
-    register array_type_  b = array_[node_pos].base;
-    register array_u_type_ p;
+    array_type_  b = array_[node_pos].base;
+    array_u_type_ p;
 
-    for (register size_t i = 0; i < len; ++i) {
+    for (size_t i = 0; i < len; ++i) {
       p = b +(node_u_type_)(key[i]) + 1;
       if (static_cast<array_u_type_>(b) == array_[p].check)
         b = array_[p].base;
@@ -431,12 +431,12 @@ class DoubleArrayImpl {
                             size_t node_pos = 0) const {
     if (!len) len = length_func_()(key);
 
-    register array_type_  b   = array_[node_pos].base;
-    register size_t     num = 0;
-    register array_type_  n;
-    register array_u_type_ p;
+    array_type_  b   = array_[node_pos].base;
+    size_t     num = 0;
+    array_type_  n;
+    array_u_type_ p;
 
-    for (register size_t i = 0; i < len; ++i) {
+    for (size_t i = 0; i < len; ++i) {
       p = b;  // + 0;
       n = array_[p].base;
       if ((array_u_type_) b == array_[p].check && n < 0) {
@@ -469,8 +469,8 @@ class DoubleArrayImpl {
                       size_t len = 0) const {
     if (!len) len = length_func_()(key);
 
-    register array_type_  b = array_[node_pos].base;
-    register array_u_type_ p;
+    array_type_  b = array_[node_pos].base;
+    array_u_type_ p;
 
     for (; key_pos < len; ++key_pos) {
       p = b +(node_u_type_)(key[key_pos]) + 1;

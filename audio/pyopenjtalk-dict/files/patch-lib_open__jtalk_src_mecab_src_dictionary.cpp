--- lib/open_jtalk/src/mecab/src/dictionary.cpp.orig	2023-11-05 02:02:12 UTC
+++ lib/open_jtalk/src/mecab/src/dictionary.cpp
@@ -66,9 +66,9 @@ template <typename T1, typename T2>
 }
 
 template <typename T1, typename T2>
-struct pair_1st_cmp: public std::binary_function<bool, T1, T2> {
+struct pair_1st_cmp: public std::__binary_function<bool, T1, T2> {
   bool operator()(const std::pair<T1, T2> &x1,
-                  const std::pair<T1, T2> &x2)  {
+                  const std::pair<T1, T2> &x2) const {
     return x1.first < x2.first;
   }
 };

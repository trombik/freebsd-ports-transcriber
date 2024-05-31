--- lib/open_jtalk/src/mecab/src/char_property.h.orig	2023-11-05 02:02:12 UTC
+++ lib/open_jtalk/src/mecab/src/char_property.h
@@ -37,7 +37,7 @@ class CharProperty {
   inline const char *seekToOtherType(const char *begin, const char *end,
                                      CharInfo c, CharInfo *fail,
                                      size_t *mblen, size_t *clen) const {
-    register const char *p =  begin;
+    const char *p =  begin;
     *clen = 0;
     while (p != end && c.isKindOf(*fail = getCharInfo(p, end, mblen))) {
       p += *mblen;

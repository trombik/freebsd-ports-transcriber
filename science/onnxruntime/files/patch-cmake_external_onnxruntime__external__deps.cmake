--- cmake/external/onnxruntime_external_deps.cmake.orig	2024-05-15 07:14:29 UTC
+++ cmake/external/onnxruntime_external_deps.cmake
@@ -58,6 +58,7 @@ if (onnxruntime_BUILD_UNIT_TESTS)
   else()
     set(GTEST_HAS_ABSL ON CACHE BOOL "" FORCE)
   endif()
+  set(GTEST_HAS_ABSL OFF CACHE BOOL "" FORCE)
   # gtest and gmock
   FetchContent_Declare(
     googletest

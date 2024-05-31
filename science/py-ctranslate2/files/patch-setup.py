--- setup.py.orig	2024-05-31 07:42:28 UTC
+++ setup.py
@@ -9,6 +9,7 @@ include_dirs = [pybind11.get_include()]
 
 base_dir = os.path.dirname(os.path.abspath(__file__))
 include_dirs = [pybind11.get_include()]
+include_dirs.append("%%PREFIX%%/include")
 library_dirs = []
 
 

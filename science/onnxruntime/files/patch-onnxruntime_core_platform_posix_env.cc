--- onnxruntime/core/platform/posix/env.cc.orig	2024-05-15 07:14:29 UTC
+++ onnxruntime/core/platform/posix/env.cc
@@ -34,6 +34,7 @@ limitations under the License.
 #include <thread>
 #include <utility>  // for std::forward
 #include <vector>
+#include <pthread_np.h>
 
 // We can not use CPUINFO if it is not supported and we do not want to used
 // it on certain platforms because of the binary size increase.
@@ -218,14 +219,14 @@ class PosixThread : public EnvThread {
         }
         auto ret = pthread_setaffinity_np(pthread_self(), sizeof(cpu_set_t), &cpuset);
         if (0 == ret) {
-          LOGS_DEFAULT(VERBOSE) << "pthread_setaffinity_np succeed for thread: " << syscall(SYS_gettid)
+          LOGS_DEFAULT(VERBOSE) << "pthread_setaffinity_np succeed for thread: " << pthread_getthreadid_np()
                                 << ", index: " << p->index
                                 << ", mask: " << *p->affinity;
         } else {
           errno = ret;
           auto [err_no, err_msg] = GetErrnoInfo();
 #if !defined(USE_MIGRAPHX)
-          LOGS_DEFAULT(ERROR) << "pthread_setaffinity_np failed for thread: " << syscall(SYS_gettid)
+          LOGS_DEFAULT(ERROR) << "pthread_setaffinity_np failed for thread: " << pthread_getthreadid_np()
                               << ", index: " << p->index
                               << ", mask: " << *p->affinity
                               << ", error code: " << err_no << " error msg: " << err_msg

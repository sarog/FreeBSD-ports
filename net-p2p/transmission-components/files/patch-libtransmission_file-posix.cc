--- libtransmission/file-posix.cc.orig	2024-12-16 16:59:46 UTC
+++ libtransmission/file-posix.cc
@@ -560,7 +560,7 @@ tr_sys_file_t tr_sys_file_get_std(tr_std_sys_file_t st
         break;
 
     default:
-        TR_ASSERT_MSG(false, fmt::format(FMT_STRING("unknown standard file {:d}"), std_file));
+        TR_ASSERT_MSG(false, fmt::format(FMT_STRING("unknown standard file {:d}"), static_cast<int>(std_file)));
         tr_error_set_from_errno(error, EINVAL);
     }
 

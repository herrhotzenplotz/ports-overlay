--- src/quick-lint-js/io/file-handle-posix.cpp.orig	2023-07-19 02:00:44 UTC
+++ src/quick-lint-js/io/file-handle-posix.cpp
@@ -145,12 +145,12 @@ std::size_t POSIX_FD_File_Ref::get_pipe_buffer_size() 
   return 65536;
 #elif QLJS_HAVE_PIPE
 #warning "Size returned by get_pipe_buffer_size might be inaccurate"
-  pipe_fds pipe = make_pipe();
+  Pipe_FDs pipe = make_pipe();
   pipe.writer.set_pipe_non_blocking();
   std::size_t pipe_buffer_size = 0;
   for (;;) {
     unsigned char c = 0;
-    Result<std::size_t, posix_file_io_error> written =
+    Result<std::size_t, POSIX_File_IO_Error> written =
         pipe.writer.write(&c, sizeof(c));
     if (!written.ok()) {
       QLJS_ASSERT(written.error().error == EAGAIN);

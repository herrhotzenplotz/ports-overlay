--- _deps/sources/libunicode/src/libunicode/scan.cpp.orig	2024-09-22 12:39:36 UTC
+++ _deps/sources/libunicode/src/libunicode/scan.cpp
@@ -23,7 +23,7 @@
 #include <string_view>
 
 // clang-format off
-#if __has_include(<experimental/simd>) && defined(LIBUNICODE_USE_STD_SIMD) && !defined(__APPLE__)
+#if __has_include(<experimental/simd>) && defined(LIBUNICODE_USE_STD_SIMD) && !defined(__APPLE__) && !defined(__FreeBSD__)
     #define USE_STD_SIMD
     #include <experimental/simd>
     namespace stdx = std::experimental;

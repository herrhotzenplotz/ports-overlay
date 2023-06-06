--- cmake/ContourThirdParties.cmake.orig	2022-04-14 16:34:19 UTC
+++ cmake/ContourThirdParties.cmake
@@ -100,9 +100,6 @@ else()
     set(THIRDPARTY_BUILTIN_freetype "system package")
 endif()
 
-ContourThirdParties_Embed_libunicode()
-ContourThirdParties_Embed_termbench_pro()
-
 if (TARGET unicode::core)
     set(THIRDPARTY_BUILTIN_unicode_core "embedded")
 else()

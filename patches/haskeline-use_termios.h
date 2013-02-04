From c075607aa2e0905c48dcb90b87b6a88adaa67bde Mon Sep 17 00:00:00 2001
From: Nathan <nathan.huesken@posteo.de>
Date: Sun, 13 Jan 2013 14:57:09 +0100
Subject: [PATCH] add terminfo

---
 haskeline.cabal |    1 +
 1 file changed, 1 insertion(+)

diff --git a/haskeline.cabal b/haskeline.cabal
index 2665ae8..7f049a5 100644
--- a/haskeline.cabal
+++ b/haskeline.cabal
@@ -114,6 +114,7 @@ Library
         Build-depends: unix>=2.0 && < 2.7
                         -- unix-2.3 doesn't build on ghc-6.8.1 or earlier
         -- Use manual encoding/decoding on ghc<7.4
+        cpp-options: -DUSE_TERMIOS_H
         if flag (legacy-encoding) || impl(ghc<7.4) {
             c-sources: cbits/h_iconv.c
             includes: h_iconv.h
-- 
1.7.10.4

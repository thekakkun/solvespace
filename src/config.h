#ifndef SOLVESPACE_CONFIG_H
#define SOLVESPACE_CONFIG_H

#define PACKAGE_VERSION "3.1~00000000"
#define GIT_HASH_URL "https://github.com/solvespace/solvespace/commit/00000000"

/* Non-OS X *nix only */
#define UNIX_DATADIR "/usr/local/share/solvespace"

/* Do we have the si library on win32, or libspnav on *nix? */
#define HAVE_SPACEWARE

/* What OpenGL version do we use? */
#define HAVE_OPENGL 3

/* If we use GTK, can we use the native file chooser? */
#define HAVE_GTK_FILECHOOSERNATIVE

#endif

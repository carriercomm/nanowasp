
#define DISKDEFS "c:/cpm/diskdefs"
#define FORMAT "microbee"

#define HAVE_FCNTL_H 1
#define HAVE_LIMITS_H 0
#define HAVE_UNISTD_H 0
#define HAVE_WINDOWS_H 0
#define HAVE_WINIOCTL_H 0
#define HAVE_LIBDSK_H 1
#define HAVE_DMALLOC_H 0
#define HAVE_SYS_TYPES_H 0
#define HAVE_SYS_STAT_H 0
#undef HAVE_MODE_T

#if HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif

#if HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif

#if HAVE_DMALLOC_H
#include <dmalloc.h>
#endif

#if HAVE_LIMITS_H
#include <limits.h>
#endif

#if HAVE_UNISTD_H
#include <unistd.h>
#endif

#if HAVE_WINDOWS_H
#include <windows.h>
#endif

#if HAVE_WINIOCTL_H
#include <winioctl.h>
#endif

#if HAVE_LIBDSK_H
#include <libdsk.h>
#endif

#if HAVE_FCNTL_H
#include <fcntl.h>
#endif

#ifndef _POSIX_PATH_MAX
#define _POSIX_PATH_MAX _MAX_PATH
#endif

#include <time.h>
#include <stdio.h>

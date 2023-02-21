#ifndef SYS_H
#define SYS_H

//Windows:
#if defined(WIN32) || defined(_WIN32)
#define SYSTEM_WINDOWS 1
#endif

//Linux:
#if defined(__linux__)
#define SYSTEM_LINUX 1
#endif

//macOS:
#if defined(__APPLE__)
#define SYSTEM_MACOS 1
#endif

//POSIX:
#if defined(SYSTEM_LINUX) || defined(SYSTEM_MACOS)
#define SYSTEM_POSIX 1
#endif

#endif
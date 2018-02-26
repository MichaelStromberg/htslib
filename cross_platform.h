#pragma once

#ifndef CROSS_PLATFORM_H
#define CROSS_PLATFORM_H

#ifdef _MSC_VER

// ===============================
// Visual Studio-specific settings
// ===============================

#define STDIN_FILENO _fileno(stdin)
#define STDOUT_FILENO _fileno(stdout)

#define ssize_t __int64
#define off_t __int64
#define lseek _lseeki64

#endif // _MSC_VER
#endif // CROSS_PLATFORM_H

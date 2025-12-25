#pragma once

#include <rules_autoconf/config.h>

#if !defined(_WIN32)
#define HAVE_BIND_TEXTDOMAIN_CODESET 1
#define HAVE_READLINK 1
#define HAVE_SETRLIMIT 1
#define HAVE_SIGSETJMP 1
#endif

#if !defined(_MSC_VER)
#define HAVE_LRINT 1
#define HAVE_ROUND 1
#endif

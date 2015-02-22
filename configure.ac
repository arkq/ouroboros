# ouroboros - configure.ac
# Copyright (c) 2015 Arkadiusz Bokowy

AC_INIT([ouroboros], [0.0.1], [arkadiusz.bokowy@gmail.com])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign -Wall -Werror])

AC_PROG_CC
AM_PROG_CC_C_O


# support for debugging
AC_ARG_ENABLE(
	[debug],
	[AS_HELP_STRING([--enable-debug], [enable debugging support])],
)
AM_CONDITIONAL([ENABLE_DEBUG], [test "x$enable_debug" = "xyes"])
AM_COND_IF(
	[ENABLE_DEBUG],
	[AC_DEFINE([DEBUG], [1], [Define to 1 if the debugging is enabled])],
)


AC_CHECK_HEADERS(
	[sys/inotify.h],
	[], [AC_MSG_ERROR([inotify.h header not found])],
)

PKG_CHECK_MODULES(
	[LIBCONFIG], [libconfig],
	[], [AC_MSG_ERROR([module libconfig not found])],
)


AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
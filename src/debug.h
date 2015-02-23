/*
 * ouroboros - debug.h
 * Copyright (c) 2015 Arkadiusz Bokowy
 *
 * This file is a part of a ouroboros.
 *
 * This projected is licensed under the terms of the MIT license.
 *
 */

#ifndef __DEBUG_H
#define __DEBUG_H

#ifdef HAVE_CONFIG_H
#include "../config.h"
#endif

#include <stdio.h>


#ifdef DEBUG
#define debug(M, ...) fprintf(stderr, "DEBUG %s:%d: " M "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#else
#define debug(M, ...) do {} while (0)
#endif

#endif

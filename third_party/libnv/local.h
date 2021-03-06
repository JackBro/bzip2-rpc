#ifndef LOCAL_H
#define LOCAL_H
/* Copyright 2016 Google Inc. All Rights Reserved.
 *
 * Use of this source code is governed by a BSD-style
 * license that can be found in the LICENSE file in
 * this directory. */

#include <string.h>
#include <stdint.h>
#include <sys/types.h>

#include "sys_endian.h"

#define HAVE_STRUCT_UCRED 1

#ifndef __DECONST
#define __DECONST(type, var)	((type)(uintptr_t)(const void *)(var))
#endif

#ifndef __unused
#define __unused	__attribute__ ((unused))
#endif

#endif

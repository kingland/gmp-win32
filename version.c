/* NTRG GMP WIN32 -- version.c
 * Patroklos G. Argyroudis <argp@cs.tcd.ie>
 *
 * Modified version of version.c for compilation of GMP on Win32.
 *
 * $Id: version.c,v 1.1.1.1 2004/01/11 10:29:39 argp Exp $
 */

/* gmp_version -- version number compiled into the library */

/*
Copyright (C) 1996, 1999, 2000  Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA.  */
 
#include "gmp.h"
#include "gmp-impl.h"

const char *gmp_version = "3.1.1-NTRG_WIN32";

/* EOF */
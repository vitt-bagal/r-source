/*
 *  R : A Computer Language for Statistical Data Analysis
 *  Copyright (C) 2001-2021 The R Core Team.
 *
 *  This header file is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; either version 2.1 of the License, or
 *  (at your option) any later version.
 *
 *  This file is part of R. R is distributed under the terms of the
 *  GNU General Public License, either Version 2, June 1991 or Version 3,
 *  June 2007. See doc/COPYRIGHTS for details of the copyright status of R.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program; if not, a copy is available at
 *  https://www.R-project.org/Licenses/
 */

/* Non-API entry points, for that part of libxml included in
 * the internet module.  Could be moved to that module.
 */

#ifndef R_FTP_HTTP_H_
#define R_FTP_HTTP_H_

#include <stdint.h>

typedef int_fast64_t DLsize_t; // used for download lengths and sizes

// used in src/modules/internet/internet.c
void *	RxmlNanoHTTPOpen(const char *URL, char **contentType, const char *headers, int cacheOK);
int	RxmlNanoHTTPRead(void *ctx, void *dest, int len);
void	RxmlNanoHTTPClose(void *ctx);
int 	RxmlNanoHTTPReturnCode(void *ctx);
char * 	RxmlNanoHTTPStatusMsg(void *ctx);
DLsize_t RxmlNanoHTTPContentLength(void *ctx);
char *	RxmlNanoHTTPContentType(void *ctx);
void	RxmlNanoHTTPTimeout(int delay);

// used in nanohttp.c, provided by internet.c
void    RxmlMessage(int level, const char *format, ...);

#endif /* R_FTP_HTTP_H_ */

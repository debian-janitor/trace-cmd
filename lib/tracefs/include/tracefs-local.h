/* SPDX-License-Identifier: LGPL-2.1 */
/*
 * Copyright (C) 2019, VMware, Tzvetomir Stoyanov <tz.stoyanov@gmail.com>
 *
 */
#ifndef _TRACE_FS_LOCAL_H
#define _TRACE_FS_LOCAL_H

/* Can be overridden */
void warning(const char *fmt, ...);
int str_read_file(const char *file, char **buffer);

#endif /* _TRACE_FS_LOCAL_H */

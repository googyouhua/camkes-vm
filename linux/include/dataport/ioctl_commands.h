/*
 * Copyright 2016, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(D61_BSD)
 */

#ifndef __DATAPORT_IOCTL_COMMANDS_H
#define __DATAPORT_IOCTL_COMMANDS_H

#define DATAPORT_MAGIC 'D'

enum {
    __DATAPORT_ALLOCATE,
    __DATAPORT_GET_PADDR,
    __DATAPORT_GET_SIZE,
};

#define DATAPORT_ALLOCATE _IOW(DATAPORT_MAGIC, __DATAPORT_ALLOCATE, size_t)
#define DATAPORT_GET_PADDR _IOR(DATAPORT_MAGIC, __DATAPORT_GET_PADDR, \
        long long unsigned int)
#define DATAPORT_GET_SIZE _IOR(DATAPORT_MAGIC, __DATAPORT_GET_SIZE, size_t)

#endif

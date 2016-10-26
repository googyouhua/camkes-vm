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

#include <poll.h>

int consumes_event_wait(int fd) {
    struct pollfd fds[] = {{ .fd = fd, .events = POLLIN }};
    return poll(fds, 1, -1 /* block until event */);
}

int consumes_event_poll(int fd) {
    struct pollfd fds[] = {{ .fd = fd, .events = POLLIN }};
    return poll(fds, 1, 0 /* don't block */);
}

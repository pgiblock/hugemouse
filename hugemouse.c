#include <errno.h>
#include <unistd.h>
#include "altermouse.h"

int
main(int argc, char *argv[])
{
    CGSConnectionID conn;
    long i, tmp_size, size;

    size = 256;

    if (argc == 2) {
        errno = 0;
        tmp_size = strtol(argv[1], NULL, 10);
        if (errno == 0) {
            size = tmp_size;
        }
    }

    conn = CGSMainConnectionID();

    // Just keep trying larger sizes. This way the largest possible one will
    // "stick" before we start requesting sizes out of bounds.
    for (i=0; i<=size; i++) {
        CGSSetCursorScale(conn, (float)i);
    }

    exit(EXIT_SUCCESS);
}

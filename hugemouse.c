#include <unistd.h>
#include "altermouse.h"

int
main(void)
{
    CGSConnectionID conn;
    int i;

    conn = CGSMainConnectionID();

    // Just keep trying larger sizes. This way the largest possible one will
    // "stick" before we start requesting sizes out of bounds.
    for (i=0; i<256; i++) {
	CGSSetCursorScale(conn, (float)i);
    }

    exit(EXIT_SUCCESS);
}

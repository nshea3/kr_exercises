#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
    int c, n1, nw, nc, state;

    state = OUT;
    n1 = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t'){
            putchar('\n');
        } else {
            putchar(c);
        }
    }
}
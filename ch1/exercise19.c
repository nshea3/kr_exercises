#include <stdio.h>

/* Count lines in input */

main()
{
    int c, d, nl;
    nl = 0;

    while((c = getchar()) != EOF)
    {
        putchar(c);
        while((d = getchar()) == ' ')
        {
            /* Do nothing for subsequent spaces */
            ;
        }
        putchar(d);
    }
    printf("%d\n", nl);
}

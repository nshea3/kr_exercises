#include <stdio.h>

/* Count lines in input */

main()
{
    int c, d, nl;
    nl = 0;

    while((c = getchar()) != EOF)
    {
        
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        } 
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        } 
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        } 
        else {
            putchar(c);
        }
    }
}

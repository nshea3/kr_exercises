#include <stdio.h>

main()
{
    int c, i, j, nwhite, nother, num_inword;
    int nchars[26];

    nwhite = nother = 0;
    for(i = 0; i < 26; ++i){
        nchars[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if (c >= 'a' && c <= 'z'){
          ++nchars[c - 'a'];
        }
    }

    for (i = 0; i < 10; ++i){
        for (j = 0; j < nchars[i]; ++j){
            printf("-");
        }
        printf("\n");
    }
}
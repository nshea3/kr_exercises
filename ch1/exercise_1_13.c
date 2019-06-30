#include <stdio.h>

main()
{
    int c, i, j, nwhite, nother, num_inword;
    int nletters[30];

    nwhite = nother = 0;
    for(i = 0; i < 30; ++i){
        nletters[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if (c >= 'a' && c <= 'z'){
            ++num_inword;
        } else {
            ++nletters[num_inword];
            num_inword = 0;
        }
    }

    for (i = 0; i < 10; ++i){
        for (j = 0; j < nletters[i]; ++j){
            printf("-");
        }
        printf("\n");
    }
}
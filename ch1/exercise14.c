#include <stdio.h>

/* Print a Fahrenheit-Celsius table 
for farhenheit temps 0, 20, 40, ..., 300 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 300;
    step = 20;
    celsius = lower;
    printf("Deg C\tFahr. Equivalent\n");
    while (celsius <= upper){
        fahr = ((9.0 / 5.0) * celsius) + 32.0;
        printf("%.2f\t%.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
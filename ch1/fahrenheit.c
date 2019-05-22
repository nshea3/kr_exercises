#include <stdio.h>

/* Print a Fahrenheit-Celsius table 
for farhenheit temps 0, 20, 40, ..., 300 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Deg F\tCelsius Equivalent\n");
    while (fahr <= upper){
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%f\t%f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
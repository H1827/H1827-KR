/* Exercise 1-3
* Modify the temperature conversion program to
* print a heading above the table */

#include <stdio.h>

int main()
{
    float lower, upper, step;
    float fahr, celcius;

    lower = 0;
    step = 20;
    upper = 300;

    /* Heading */
    printf("fahrenheit to clecius conversion table\n");
    printf("fahrenheit | celcius\n");

    fahr = lower;
    while(fahr <= upper)
    {
        celcius = (5.0/9.0)*(fahr-32.0);
        printf("%10.0f | %7.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
    return 0;
}

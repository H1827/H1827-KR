/* Exercise 1-4
 * Write a program to print the corresponding fahrenheit to celcius program */

#include <stdio.h>
int main()
{
	/* float is unnecessary as this table contains only round numbers */
	int lower, upper, step;
	int celcius, fahr;

	lower = 0;
	upper = 300;
	step = 20;
	celcius = lower;

	/* heading */
	printf("celcius to fahrneheit conversion table\n");
	printf("celcius | fahrenheit\n");

	/* conversion table */
	while(celcius <= upper)
	{
		fahr = celcius/(5.0/9.0)+32;
		printf("%7d | %10d\n", celcius, fahr);
		celcius = celcius + step;
	}
	return 0;
}


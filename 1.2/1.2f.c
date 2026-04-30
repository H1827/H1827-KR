/* 1.2 Variables and Arithmetic Expressions
 * floating point version provided by the book */

#include <stdio.h>

int main()
{
	float fahr, celcius;
	float lower, upper, step;

	step = 20;
	lower = 0;
	upper = 300;

	fahr = lower;
	while(fahr <= upper)
	{
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
	return 0;
}

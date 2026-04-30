/* Exercise 1-9
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank */

#include <stdio.h>
int main()
{
	int c, b;
	b = EOF;
	
	while((c=getchar()) != EOF)
	{
		if(c==' ')
			if(b!=c)
				putchar(c);
		if(c!=' ')
			putchar(c);
		b=c;
	}

	return 0;
}


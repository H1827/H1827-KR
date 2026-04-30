/* Exercise 1-10
 * Write a program to copy its input to its output,
 * replacing each tab by \t, each backspace by \b,
 * and each backslash by \\.
 * This makes tabs and backspaces visible in an unambigious way. */

#include <stdio.h>

int main()
{
	int c;

	while((c=getchar()) != EOF)
	{
		if(c==' ')
			printf("\\b");
		if(c=='\t')
			printf("\\t");
		if(c=='\\')
			printf("\\\\");
		if(c!=' ')
			if(c!='\t')
				if(c!='\\')
					putchar(c);
	}
	return 0;
}

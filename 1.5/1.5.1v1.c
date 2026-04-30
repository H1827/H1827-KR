/* 1.5.1 File Copying
 * output one character at a time, example from the book */

#include <stdio.h>

/* copy inpute to output; 1st version */

int main()
{
	int c;
	c = getchar();

	while (c!=EOF)
	{
		putchar (c);
		c = getchar();
	}

	return 0;
}


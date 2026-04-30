/* 1.5.1 File Copying
 * output one character at a time, example from the book */

#include <stdio.h>

/* copy inpute to output; 2nd version */

int main()
{
	int c;

	while ((c=getchar())!=EOF)
		putchar (c);

	return 0;
}


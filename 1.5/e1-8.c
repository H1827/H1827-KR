/* Exercise 1-8
 * Write a program to count blanks, tabs and newlines */

#include <stdio.h>

int main()
{

	int bl, tb, nl, c;

	printf("\nThis program counts tabs, blanks and new lines.");
	printf("\nInput EOF to see your results:\n");

	bl = tb = nl = 0;
	while((c=getchar()) != EOF)
	{
		if(c=='\n')
			++nl;
		if(c==' ')
			++bl;
		if(c=='\t')
			++tb;
	}

	printf("\n---RESULTS---");
	printf("\nTabs: %d\nBlanks: %d\nLines: %d\n", tb, bl, nl);

	return 0;
}

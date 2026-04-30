/* Exercise 1-14
 * Write a program to print the frequencies of different characters
 * in its input */

#include <stdio.h>
#define CAP 256 /* only ascii characters count as valid for this program */

int main(){

/* Declarations */
	int i, c, y;
	int max_frequency = 0;
	int idx = 0; /* index of the character entered */

	int data[CAP];
	for( i=0; i<CAP; ++i)
		data[i] = 0;

/* Data collection for the generation of the histogram */
	while( (c=getchar()) != EOF ){
		if( c>=0 && c<CAP ){
			++data[c];
			if( data[c] > max_frequency )
				max_frequency = data[c];
			if( c > idx )
				idx = c;
		}
	}

/* This part prints the vertical histogram bars */
	y = max_frequency;
	while( y > 0 ){
		for( i=0; i <= idx; ++i)
			if( data[i] > 0 ){
				if( data[i] >= y )
					printf(" |");
				else
					printf(" .");
			}
		printf("\n");
		--y;
	}

/* This part prints the character registry at the bottom of the histogram */
	for( i=0; i <= idx; ++i)
		if( data[i] > 0){
			if( i == 10 )
				printf("\\n");
			else if( i == 9 )
				printf("\\t");
			else if( i == 32 )
				printf("\\s");
			else{
				printf(" ");
				putchar(i);
			}
		}
	return 0;
}

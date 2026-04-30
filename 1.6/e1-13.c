/* Exercise 1-13
 * Write a program to print a historgram of the lenghts of words
 * in its input. It is easy to draw the histogram with the bars
 * horizontal; a vertical orientation is more chllanging.
 */

/* this is a vertical bar version */

#include <stdio.h>

#define IN 1
#define OUT 0
#define CAP 99

int main(){

	int i, c, y;
	int state = OUT; /* State of being IN or OUT of a word */
	int longest_word = 0;
	int max_frequency = 0;

	int data[CAP]; /* max word lenght of 99 */
	for( i=0; i<CAP; ++i ) /* setting all counters to 0 */
		data[i]=0;

/* Here data is collected - word lenghts and frequencies
 * of those lenghts. It only counts letters as part of a 
 * word by using standart ASCII values */
	i = 0; 
	while( (c=getchar()) != EOF ){
		if( (c>=65 && c<=90) || (c>=97 && c<=122) ){
			if( i<CAP-1)
				++i;
			state = IN;
		}
		else if( state == IN){
			if( i<CAP )
				++data[i];
			if( i<CAP && data[i] > max_frequency )
				max_frequency = data[i];
			if( i > longest_word )
				longest_word = i;
			i = 0;
			state = OUT;
		}
	}
/* This part exists in case EOF is entered mid-word */
	if( state == IN){
		if( i<CAP )
			++data[i];
		if( i<CAP && data[i] > max_frequency )
			max_frequency = data[i];
		if( i > longest_word )
			longest_word = i;
	}

/* This part prints a vertical bar histogram starting from the
 * highest y value. It omits word lenghts that did not occur */
	printf("\n");
	y = max_frequency;
	while( y >0 ){
		for( i=1; i <= longest_word; ++i ){
			if( data[i] >= y ){
				if( i > 9)
					printf("  |");
				else 
					printf(" |");
			}
			else if(data[i] > 0){
				if( i > 9)
					printf("  .");
				else 
					printf(" .");
			}
		}
		printf("\n");
		--y;
	}

/* This part prints numbers to represent the x variables, in
 * order to make reading the histogram easier. Only prints a number
 * if that letter count occurance exists in input */
	for( i=1; i<=longest_word; ++i)
		if( data[i] > 0 )
			printf(" %d", i);

	return 0;
}


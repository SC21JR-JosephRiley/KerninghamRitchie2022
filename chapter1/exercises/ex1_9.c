#include <stdio.h>

/* This program is supposed to copy input
 * to output, except with all consequtive sequences of
 * blanks replaced by one blank
 *
 * One way to track if we're in a blank sequence
 * would be to always keep track of what 
 * the character immediately before getchar() was
 *
 * To manage compressing the blanks we could
 * use a nested if statement
 * First if checks if the current is identical to 
 * the previous
 * The nested if checks if this character is a blank 
 * and does nothing
 * else we should just putchar()*/


main()
{
	int prev_c, curr_c;
	
	prev_c = '\0';
	while((curr_c = getchar()) != EOF) {
		
		if(prev_c == curr_c) { 
			if(curr_c == ' ') {
				;
			}
		}
		else {
			putchar(curr_c);
		}

		prev_c = curr_c;
	}

}

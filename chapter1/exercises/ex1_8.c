#include <stdio.h>

/*	A program that counts blanks, tabs and newlines 
 *	
 *	Initialise the variables; number_blanks, number_tabs
 *	number_newlines.
 *	use the standard character counting with an if-else
 *	statement 
 *	print out the numbers once the input reaches the EOF*/

int main()
{
	int c, nb, nt, nl;

	nl = nt = nb = 0;

	while((c = getchar()) != EOF)
		if(c == '\n')
			nl++;
		else if(c == '\t')
			nt++;
		else if(c == ' ')
			nb++;
	printf("\nNewlines: %d\nTabs: %d\nBlanks: %d\n", 
			nl, nt, nb);
}

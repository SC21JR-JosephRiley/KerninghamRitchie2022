#include <stdio.h>

/*while(character that is not end-of-file indicator)
 * 	output the character just read
 * 	read a character*/

/*copy input to output; first version	*/
main()
{
	int c;

	c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
}

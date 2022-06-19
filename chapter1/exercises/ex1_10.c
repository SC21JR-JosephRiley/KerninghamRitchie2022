#include <stdio.h>

main()
{
	int c; 
	while((c = getchar()) != EOF)
	{
		if(c == '\n' || c == '\t' || 
		c == '\b' || c == '\\')	{
			putchar('\\');
			if(c == '\n') {
				putchar('n');
			}
			else if(c == '\t') {
				putchar('t');
			}
			else if(c == '\b') {
				putchar('b');
			}
		}
		else
			putchar(c);	
	}
}

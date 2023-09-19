#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The string to print.
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}


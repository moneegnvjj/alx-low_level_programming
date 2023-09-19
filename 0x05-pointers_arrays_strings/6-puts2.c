#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * puts2 - Prints every other character of a string, starting n
 * @str: The string to print.
 */
void puts2(char *str)
{
	int i = 0;

	char = ("Lorem ipsum...");

	if (str == NULL)
		return;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}


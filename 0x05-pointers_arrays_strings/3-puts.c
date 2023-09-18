#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: A pointer to a string.
 */
void _puts(char *str)
{
	if (str == NULL)
		return;

	while (*str)
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}


#include <unistd.h>
#include <stdlib.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
	int len = 0;

	if (s == NULL)
		return;

	while (s[len] != '\0')
		len++;

	/* Move back one position to exclude the null terminator*/
	len--;

	while (len >= 0)
	{
		write(1, &s[len], 1);
		len--;
	}
	write(1, "\n", 1);
}

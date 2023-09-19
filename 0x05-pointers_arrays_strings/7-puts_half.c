#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string followed by a newline.
 * @str: The string to print the second half of.
 * Return: void
 */
void puts_half(char *str)
{
		int i, n, count = 0;

		for (i = 0 ; str[i] != '\0' ; i++)
			count++;
		n = (count - 1) / 2;
		for (i = n + 1 ; str[i] != '\0' ; i++)
			putchar(str[i]);
		putchar('\n');
}

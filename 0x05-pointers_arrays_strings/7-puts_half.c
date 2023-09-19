#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string followed by a newline.
 * @str: The string to print the second half of.
 */
void puts_half(char *str)
{
		int len = strlen(str);
		int start;

		if (len % 2 == 0)
		{
			start = len / 2;
		}
		else
		{
			start = (len - 1) / 2;
		}

		for (; start < len; start++)
		{
			putchar(str[start]);
		}

		putchar('\n');
}

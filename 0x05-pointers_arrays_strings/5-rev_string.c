#include <unistd.h>
#include <stdlib.h>

/**
 * rev_string - Reverses a string in place.
 * @s: The input string.
 */
void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	int end = len - 1;
	char temp = s[start];

	if (s == NULL)
		return;

	while (s[len] != '\0')
		len++;

	/* Swap characters from the beginning and end of the string*/

	while (start < end)
	{
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
		int len = 0;
		char temp;
		int i, j;

		if (s == NULL)
			return;

		/* Calculate the length of the string*/
		while (s[len] != '\0')
			len++;
		/* Reverse the string*/
		for (i = 0, j = len - 1; i < j; i++, j--)
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
		}
}

#include <stdio.h>

/**
 * _strcmp - Compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 0 if the strings are equal
 * value if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int b = 0;

	for (i = 0; s1[i] != '\0' && b == 0; i++)
	{
		b = s1[i] - s2[i];
	}
	return (b);
}

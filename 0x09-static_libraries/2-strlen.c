#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	if (s == NULL)
		return (-1);

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

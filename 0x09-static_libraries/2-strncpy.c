#include <stdio.h>

/**
 * _strncpy - Copies a string up to 'n' bytes.
 * @dest: Destination string where the copied content will be placed.
 * @src: Source string to be copied.
 * @n: Maximum number of bytes to copy.
 *
 * Return: Pointer to the destination string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

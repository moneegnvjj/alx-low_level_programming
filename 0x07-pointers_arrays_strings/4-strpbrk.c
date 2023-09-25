#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to search in
 * @accept: Pointer to the string containing bytes to match
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
				return (s);

			i++;
		}

		s++;
	}

	/* If the character is not found, return NULL*/
	return (NULL);
}


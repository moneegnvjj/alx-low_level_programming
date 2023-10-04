#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len = 0;

	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[len])
		len++;

	/* Allocate memory for the duplicated string */
	dup_str = malloc(sizeof(char) * (len + 1));

	/* Check if memory allocation failed */
	if (dup_str == NULL)
		return (NULL);

	/* Copy the characters from str to dup_str */
	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}


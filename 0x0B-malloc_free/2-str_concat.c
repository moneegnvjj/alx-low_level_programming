#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated string containing the concatenated
 * strings, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Check if s1 is NULL and treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* Check if s2 is NULL and treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for the concatenated string */
	concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

	/* Check if memory allocation failed */
	if (concatenated == NULL)
		return (NULL);

	/* Copy the characters from s1 to concatenated */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Concatenate s2 to the end of concatenated */
	for (j = 0; j < len2; j++, i++)
		concatenated[i] = s2[j];

	/* Null-terminate the concatenated string */
	concatenated[i] = '\0';

	return (concatenated);
}


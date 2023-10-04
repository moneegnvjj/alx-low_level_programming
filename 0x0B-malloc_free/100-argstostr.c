#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenate all program arguments into a single string.
 * @ac: The argument count.
 * @av: The argument vector (array of strings).
 *
 * Return: A pointer to a new string containing concatenated arguments,
 *         or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, len = 0, total_len = 0;

	/* Check if ac is 0 or av is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length needed for the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len + 1; /* +1 for newline character */
		len = 0;             /* Reset len for the next argument */
	}

	/* Allocate memory for the concatenated string */
	concatenated = malloc(sizeof(char) * total_len + 1);

	/* Check if memory allocation failed */
	if (concatenated == NULL)
		return (NULL);

	/* Concatenate arguments with newlines */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			concatenated[len++] = av[i][j];
		concatenated[len++] = '\n'; /* Add newline character */
	}

	/* Null-terminate the concatenated string */
	concatenated[len] = '\0';

	return (concatenated);
}


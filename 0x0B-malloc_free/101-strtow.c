#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Split a string into words.
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 *         The last element of the array is NULL.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, word_count = 0, word_length = 0, in_word = 0;
	int str_len = strlen(str);

	/* Check if str is NULL or empty */
	if (str == NULL || *str == '\0')
		return (NULL);

	/* Count the number of words in the string */
	for (i = 0; i < str_len; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			word_count++;
			in_word = 1;
		}
		else if (str[i] == ' ')
		{
			in_word = 0;
		}
	}

	/* Allocate memory for the array of words */
	words = malloc(sizeof(char *) * (word_count + 1));

	/* Check if memory allocation failed */
	if (words == NULL)
		return (NULL);

	in_word = 0;
	word_length = 0;
	j = 0;

	/* Initialize and extract the words */
	for (i = 0; i <= str_len; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			in_word = 1;
			word_length = 1;
		}
		else if ((str[i] == ' ' || str[i] == '\0') && in_word)
		{
		words[j] = malloc(sizeof(char) * (word_length + 1));

		/* Check if memory allocation failed */
		if (words[j] == NULL)
		{
			/* Free previously allocated memory */
				for (i = 0; i < j; i++)
					free(words[i]);
				free(words);
				return (NULL);
		}

		/* Copy the word to the array */
		strncpy(words[j], &str[i - word_length], word_length);
		words[j][word_length] = '\0';

		j++;
		in_word = 0;
		word_length = 0;
		}
		else if (str[i] != ' ' && in_word)
		{
			word_length++;
		}
	}

	/* Set the last element of the array to NULL */
	words[word_count] = NULL;

	return (words);
}


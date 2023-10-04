#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string represents a positive number.
 * @str: The input string to check.
 *
 * Return: 1 if it's a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}


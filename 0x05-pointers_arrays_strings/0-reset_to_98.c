#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 * @n: A pointer to an integer.
 *
 * Return: Always 0.
 */
int reset_to_98(int *n)
{
	if (n == NULL)
		return (-1);

	*n = 98;

	return (0);
}


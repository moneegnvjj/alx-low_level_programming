#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to an integer.
 * @b: A pointer to another integer.
 *
 * Return: Always 0.
 */
int swap_int(int *a, int *b)
{
	int temp;

	if (a == NULL || b == NULL)
		return (-1);

	temp = *a;
	*a = *b;
	*b = temp;

	return (0);
}

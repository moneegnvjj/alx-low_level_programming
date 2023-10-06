#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, exit with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98); /* Terminate with status 98 if malloc fails. */
	}

	return (ptr);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array and set it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size in bytes of each element.
 *
 * Return: A pointer to the allocated and zero-initialized memory.
 *         If nmemb or size is 0, or if malloc fails, it returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned int i; /* Declare i before the loop */

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Set the allocated memory to zero */
	for (i = 0; i < total_size; i++)
	{
		*((char *)ptr + i) = 0;
	}

	return (ptr);
}

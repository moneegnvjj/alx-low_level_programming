#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector (array of strings).
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Silence unused variable warning*/

	printf("%d\n", argc - 1);

	return (0);
}


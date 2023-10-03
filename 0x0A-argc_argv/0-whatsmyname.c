#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments (unused)
 * @argv: An array containing the command-line arguments
 *
 * Description: Print the name of the program
 * without removing the path and a newline.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;  /* Mark argc as intentionally unused*/
	printf("%s\n", argv[0]);
	return (0);
}


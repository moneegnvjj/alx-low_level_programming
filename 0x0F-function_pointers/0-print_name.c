#include <stdio.h>

/**
 * print_name - Prints a name using a given function.
 * @name: The name to be printed.
 * @f: A function pointer that defines the printing style.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

/**
 * betty_style - A function to print a name in Betty coding style.
 * @name: The name to be printed.
 */
void betty_style(char *name)
{
	if (name)
		printf("Hello, my name is %s.\n", name);
}

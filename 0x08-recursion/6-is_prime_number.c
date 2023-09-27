#include <stdio.h>

/**
 * check_divisibility - Helper function to check divisibility recursively.
 * @n: The number to check for divisibility.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is divisible by divisor, 0 otherwise.
 */
int check_divisibility(int n, int divisor)
{
	if (divisor == 1)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (check_divisibility(n, divisor - 1));
}

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
		if (n <= 1)
			return (0); /* 0 and 1 are not prime numbers*/

		if (n == 2)
			return (1); /* 2 is a prime number*/

		if (n % 2 == 0)
			return (0); /* Even numbers (except 2) are not prime*/

		return (check_divisibility(n, n - 1));
}

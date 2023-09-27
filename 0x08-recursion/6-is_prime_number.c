#include <stdio.h>

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i;

		if (n <= 1) /* 0 and 1 are not prime numbers */
			return (0);

		if (n <= 3) /* 2 and 3 are prime numbers */
			return (1);

		if (n % 2 == 0 || n % 3 == 0) /* numbers and multiples of 3 not prime */
			return (0);

		/* Check for prime using 6k +/- 1 rule */
		for (i = 5; i * i <= n; i += 6)
		{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		}

		return (1); /* If none of the above conditions are met, n is prime */
}

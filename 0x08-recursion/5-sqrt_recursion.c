#include <stdio.h>

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Negative numbers do not have natural square roots */
		return -1;

	if (n == 0 || n == 1) /* Base cases */
		return n;

	return helper_sqrt(n, 1); /* Call the helper function */
}

/**
 * helper_sqrt - Helper function to calculate square root recursively.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int helper_sqrt(int n, int guess)
{
	if (guess * guess == n) /* If guess squared equals n, we found the square root */
		return guess;

	if (guess * guess > n) /* If guess squared is greater than n, there's no natural square root */
		return -1;

	return helper_sqrt(n, guess + 1); /* Try the next guess */
}

int main(void)
{
	int number = 16; /* You can change this number to test different values */
	int result = _sqrt_recursion(number);

	if (result == -1)
		printf("No natural square root found for %d\n", number);
	else
		printf("The square root of %d is %d\n", number, result);

	return (0);
}


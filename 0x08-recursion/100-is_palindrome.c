#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int left = 0;
	int right = strlen(s) - 1;

	while (left < right)
	{
		if (s[left] != s[right])
			return (0); /* Not a palindrome */

		left++;
		right--;
	}

	return (1); /* It's a palindrome */
}

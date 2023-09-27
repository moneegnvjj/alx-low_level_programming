#include <stdio.h>
#include <string.h>

/**
 * check_palindrome - Helper function to check if a substring is a palindrome.
 * @s: The string to be checked.
 * @start: The start index of the substring.
 * @end: The end index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1); /* Empty string or single character is a palindrome */

	return (check_palindrome(s, 0, length - 1));
}

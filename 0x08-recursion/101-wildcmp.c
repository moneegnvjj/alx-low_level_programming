#include <stdio.h>

/**
 * wildcmp - Compare two strings allowing the special character *.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared (may contain *).
 *
 * Return: 1 if s1 and s2 are identical, considering *, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /* Both strings empty considered identical */
		return (1);

	if (*s2 == '*')
	{
		if (*s1 == '\0') /* * in s2 can replace an empty string */
			return (wildcmp(s1, s2 + 1));
		else /* * in s2 can replace one or more characters in s1 */
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2) /* Current characters match, move to the next characters */
		return (wildcmp(s1 + 1, s2 + 1));

	return (0); /* Characters do not match */
}

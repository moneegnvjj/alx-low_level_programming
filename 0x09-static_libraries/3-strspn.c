/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to search in
 * @accept: Pointer to the string containing characters to match
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		int i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			i++;
		}

		if (accept[i] == '\0')
			break;

		s++;
	}

	return (count);
}


/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector (array of strings).
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (int i = 1; i < argc; i++)
	{
	if (!is_positive_number(argv[i]))
	{
	printf("Error\n");
	return (1);
	}
	
	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}


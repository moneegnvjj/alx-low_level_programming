/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to char (the target pointer)
 * @to: Pointer to char (the value to set)
 */
void set_string(char **s, char *to)
{
	*s = to;
}


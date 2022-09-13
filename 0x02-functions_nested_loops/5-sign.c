/**
 * print_sign -> checks for lowwercase
 * @n: integer
 * Return: 1 for lowercase and 0 for uppercase
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return 1;
	}

	if (n == 0)
	{
		return 0;
	}

	return -1;
}

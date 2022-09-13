#include "main.h"

/**
 * print_last_digit -> checks for lowwercase
 * @n: integer
 * Return: 1 for lowercase and 0 for uppercase
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	int x = n % 10;

	_putchar(x + '0');
	return (x);
}

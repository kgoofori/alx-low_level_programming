#include <limits.h>
#include "main.h"

/**
 * print_last_digit -> checks for lowwercase
 * @n: integer
 * Return: 1 for lowercase and 0 for uppercase
 */
int print_last_digit(int n)
{
	int x;

	if (n == INT_MIN)
	{
		_putchar('8');
		return (8);
	}

	if (n < 0)
	{
		n = -n;
	}

	x = n % 10;

	_putchar(x + '0');
	return (x);
}

#include "main.h"

/**
 * print_last_digit -> checks for lowwercase
 * @n: integer
 * Return: 1 for lowercase and 0 for uppercase
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}

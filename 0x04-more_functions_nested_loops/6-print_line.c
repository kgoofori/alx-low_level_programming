#include "main.h"
#include <stdio.h>

/**
 * print_line -> checks for lowwercase
 * @n: int
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');

}

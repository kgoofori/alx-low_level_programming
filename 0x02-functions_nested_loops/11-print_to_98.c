#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -> checks for lowwercase
 * @n: integer
 * Return: void
 */


void print_to_98(int n)
{

	if (n < 98)
	{
		while (n < 98)
		{
			printf('%d, ', n);
			n++;
		}

	} else
	{
		while (n > 98)
		{
			printf('%d, ', n);
			n--;
		}
	}

	printf('%d', 98);
	_putchar('\n');
}

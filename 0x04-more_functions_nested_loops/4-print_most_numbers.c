#include "main.h"

/**
 * print_most_numbers -> checks for lowwercase
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 4 && i != 2)
		{
			_putchar('0' + i);
		}
		i++;
	}

	_putchar('\n');

}

#include "main.h"
#include <stdio.h>

/**
 * print_diagonal -> checks for lowwercase
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;
	int x;

	while (i < n)
	{
		for (x = 0; x < i; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

}

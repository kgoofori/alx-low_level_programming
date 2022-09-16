#include "main.h"
#include <stdio.h>

/**
 * print_square -> checks for lowwercase
 * @size: int
 * Return: void
 */
void print_square(int size)
{
	int i = 0;
	int x;

	while (i < size)
	{
		for (x = 0; x < size ; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}

}

#include <stdio.h>
#include "main.h"

/**
 * print_times_table -> checks for lowwercase
 * @n: int
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, val;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			val = a * b;

			if (b == n)
			{
				printf("%i\n", val);
			} else if (val < 10 && b != 0)
			{
				printf("  %i, ", val);
			} else if (val < 100 && b != 0 )
			{
				printf(" %i, ", val);
				continue;
			} else
			{
				printf("%i, ", val);
			} 
		}

		_putchar('\n');
	}


}


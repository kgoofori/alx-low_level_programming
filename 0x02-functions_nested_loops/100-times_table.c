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

	if (n < 15)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			val = a * b;

			if (b == n)
			{

				if (val < 10 && b != 0)
				{
					printf("  %i\n", val);
				} else if (val < 100 && b != 0)
				{
					printf(" %i\n", val);
				} else
				{
					printf("%i\n", val);
				}
			} else
			{
				if (val < 10 && b != 0)
				{
					printf("  %i, ", val);
				} else if (val < 100 && b != 0)
				{
					printf(" %i, ", val);
				} else
				{
					printf("%i, ", val);
				}
			}
		}
	}
	}
}


#include "main.h"

/**
 * print_to_98 -> checks for lowwercase
 * @n: integer
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			} else
			{
				//_putchar(n / 10 + '0');
				//_putchar(n % 10 + '0');
				printf("%i", n);
			}

			if ( n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}

	} else
	{
		while (n >= 98)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			} else
			{
				//_putchar(n / 10 + '0');
				//_putchar(n % 10 + '0');
				printf("%i, ", n);
			}

			if ( n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}

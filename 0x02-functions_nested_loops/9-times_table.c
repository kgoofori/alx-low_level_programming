#include "main.h"

/**
 * times_table -> checks for lowwercase
 * Return: void
 */
void times_table(void)
{
	int a, b, val;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			val = a * b;
			if (val < 10)
			{
				if (val != 0)
				{
					_putchar(' ');
				}

				_putchar(val + '0');
			}else 
			{
				_putchar(val / 10 + '0');
				_putchar(val % 10 + '0');
			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');

			}
		}

		_putchar('\n');
	}


}


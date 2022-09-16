#include "main.h"

/**
 * more_numbers -> checks for lowwercase
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int x;
	int rem;

	while (i < 10)
	{
		for (x = 0; x < 15; x++)
		{
			rem = x;
			if (x > 9)
			{
				rem = x % 10;
				_putchar(x / 10 + '0');
			}

			_putchar('0' + rem);
		}

		_putchar('\n');
		i++;
	}

}

#include "main.h"

/**
 * jack_bauer -> prints time
 */
void jack_bauer(void)
{
	int h, s;

	for (h = 0; h < 24 ; h++)
	{
		for (s = 0; s < 60; s++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar(h + '0');
			} else
			{
				_putchar(h / 10 + '0');
				_putchar(h % 10 + '0');
			}

			_putchar(':');

			if (s < 10)
			{
				_putchar('0');
				_putchar(s + '0');
			} else
			{
				_putchar(s / 10 + '0');
				_putchar(s % 10 + '0');
			}
		}
}

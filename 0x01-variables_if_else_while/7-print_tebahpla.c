#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: print alpa.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');
	return (0);
}

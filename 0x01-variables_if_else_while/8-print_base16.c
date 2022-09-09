#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: print numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	char alpha = 'a';

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}

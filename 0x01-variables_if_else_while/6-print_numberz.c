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

	while (num < 10)
	{
		putchar(num%10 + '0');
		num++;
	}
	putchar('\n');
	return (0);
}

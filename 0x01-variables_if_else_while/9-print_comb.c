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
		printf("%d, ", num);
		num++;
	}
	putchar('\n');
	return (0);
}

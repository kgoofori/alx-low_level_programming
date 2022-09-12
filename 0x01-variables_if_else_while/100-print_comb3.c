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
	int num1;
	int num2;

	for (num1 = 0; num1 <= 8; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');

			if (num1 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

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
	char alpha = "a";

	while (alpha <= "Z")
	{
		putchar(alpha);
		alpha++;
	}
	putchar("\n")
	return (0);
}

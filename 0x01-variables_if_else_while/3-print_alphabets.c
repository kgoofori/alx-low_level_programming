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
	char alpha = 'a';
	char cap = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	while (cap <= 'Z')
        {
                putchar(cap);
                cap++;
        }

	putchar('\n');
	return (0);
}

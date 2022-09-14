#include <stdio.h>

/**
 * main - entry
 * Description: natural
 * Return: 0 always
 */

int main(void)
{
	int i;
	long int a = 0, b = 1, sum = 0, val;

	for (i = 0; val < 4000000; i++)
	{
		val = a + b;
		a = b;
		b = val;

		if (val % 2 == 0)
		{
			sum += val;
		}
	}

	printf("%lu\n", sum);

	return (0);
}

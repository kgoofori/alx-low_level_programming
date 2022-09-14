#include <stdio.h>

/**
 * main - entry
 * Description: natural
 * Return: 0 always
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}

	printf("%i\n", sum);

	return (0);
}

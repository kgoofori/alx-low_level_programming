#include <stdio.h>

/**
 * main - entry
 * Description: natural
 * Return: 0 always
 */

int main(void)
{
	int i;
	long int a = 0, b = 1,  val;
	

	for (i = 0; i < 100; i++)
	{
		val = a + b;
		a = b;
		b = val;

		printf("%lu", val);

		if (i < 100)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}

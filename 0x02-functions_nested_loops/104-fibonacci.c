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

	for (i = 0; i < 98; i++)
	{
		val = a + b;
		a = b;
		b = val;

		if(i < 92)
		{
			printf("%lu", val);
		} else {
			printf("%lu", val / 1000000000);
			printf("%lu", val % 1000000000);
		}

		if (i < 97)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}

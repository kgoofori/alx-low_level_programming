include <stdio.h>
#include <math.h>
/**
 * main - prime numbers
 *
 * Return: Always 0.
 */
int main(void)
{

	unsigned int long n = 612852475143, a = (int) sqrt(n);

	while (n % a == 0)
	{

		printf("%lu \n", n / a);
		a++;
	}


	return (0);
}

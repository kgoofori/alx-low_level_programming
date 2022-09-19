#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array
 * @a: pointer
 * @n: int
 * Description: print number with space and comma.
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (n - i != 1)
		{
			printf(", ");
		}
		i++;
	}

	printf("\n");

}

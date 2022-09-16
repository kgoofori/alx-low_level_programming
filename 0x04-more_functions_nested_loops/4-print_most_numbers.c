#include "main.h"
#include <stdio.h>

/**
 * print_numbers -> checks for lowwercase
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 4 && i != 2)
		{
			printf("%i", i);
		}
		i++;
	}

	printf("\n");

}

#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n <= 0)
		return (-1);
	
	while (i < n)
	{
		if (i * i == n)
			break;
		i++;
	}

	return (i);
}


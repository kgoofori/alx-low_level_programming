#include "main.h"

/**
 * square - find natural square root
 * @n: int
 * @i: int
 * Return: int
 */

int square(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (square(n, i + 1));
}


/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (square(n, 1));
}



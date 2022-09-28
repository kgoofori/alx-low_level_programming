#include "main.h"

/**
 * square - find natural square root
 * @n: int
 * @i: int
 * Return: int
 */

int square(int n, int i)
{
	if (i >= n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (square(n, i + 1));
}


/**
 * is_prime_number - find natural square root
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (square(n, 2));
}



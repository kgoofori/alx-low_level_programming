#include "main.h"

/**
 * reverse_array - reverse
 * @a: pointer
 * @n: int
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0, half = n / 2;

	while (half > 0)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
		i++;
		half--;
	}
}

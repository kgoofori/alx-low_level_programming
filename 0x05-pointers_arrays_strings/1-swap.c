#include "main.h"
/**
 * swap_int - swap variable values
 * @a: int pointer
 * @b: int pointer
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}

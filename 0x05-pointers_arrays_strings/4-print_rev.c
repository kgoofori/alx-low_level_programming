#include "main.h"

/**
 * print_rev - prints reversed string
 * @s: pointer
 * Return: void
*/

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}

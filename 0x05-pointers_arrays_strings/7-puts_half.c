#include "main.h"

/**
 * puts_half - find the length of a string
 * @str: string pointer
 * Description: desc
 * Return: int
*/

void puts_half(char *str)
{

	int i = 0;

	while (str[i])
	{
		i++;
	}

	if (i % 2 == 0)
	{
		i = i / 2;
	} else
	{
		i = i / 2 + 1;
	}

	while (str[i])
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}

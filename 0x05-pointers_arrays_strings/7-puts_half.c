#include "main.h"

/**
 * puts_half - find the length of a string
 * @s: string pointer
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

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}

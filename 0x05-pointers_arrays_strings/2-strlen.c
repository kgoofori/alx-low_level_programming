#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: string pointer
 * Return: int
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

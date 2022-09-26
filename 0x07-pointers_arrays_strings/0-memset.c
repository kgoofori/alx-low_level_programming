#include "main.h"

/**
 * *_memset - fills memory with a constant b.
 * @s: string
 * @b: char
 * @n: int
 * Return: s
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}

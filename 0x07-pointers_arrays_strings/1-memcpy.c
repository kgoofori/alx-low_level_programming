#include "main.h"

/**
 * *_memcpy - fills memory with a constant b.
 * @dest: pointer
 * @src: char
 * @n: int
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}

	return (dest);
}

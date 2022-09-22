#include "main.h"

/**
 * *_strncat - truncat two strings
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = -1, i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (a < n && src[a] != '\0');
	
	dest[i + 1] = '\0';

	return (dest);
}

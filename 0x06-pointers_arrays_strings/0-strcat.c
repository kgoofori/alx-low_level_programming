#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer
 * @src: pointer
 * Return: void
*/

char *_strcat(char *dest, char *src)
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
	} while (src[a] != '\0');

	return (dest);
}

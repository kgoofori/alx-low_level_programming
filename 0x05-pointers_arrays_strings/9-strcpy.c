#include "main.h"

/**
 * _strcpy - print `n` elements of an array
 * @dest: pointer destination
 * @src: source
 * Description: print number with space and comma.
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');

	return (dest);
}

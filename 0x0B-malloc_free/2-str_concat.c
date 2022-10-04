#include <stdlib.h>
#include "main.h"

/**
 * getLenght - get length of a string
 * @s: string
 * Return: int
 */


int getLenght(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;

	return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *val;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = getLenght(s1);
	size2 = getLenght(s2);
	val = malloc((size1 + size2) * sizeof(char) + 1);

	if (val == NULL)
		return (NULL);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			val[i] = s1[i];
		else
			val[i] = s2[i - size1];
	}

	val[i] = '\0';
	return (val);
}

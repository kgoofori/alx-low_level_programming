#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated
*@str:String to be copied
*Return: pointer to allocated
*/

char *_strdup(char *str)
{
	char *copy;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}

	copy[len] = '\0';

	return (copy);

}

#include "main.h"

/**
 * *create_array - creates an array of chars,
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	
	if (size == 0 || array == 0)
		return (NULL);

	while (size > 0)
	{
		size--;
		array[size] = c;
	}

	return (array);
}

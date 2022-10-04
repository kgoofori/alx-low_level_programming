#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	array = malloc(sizeof(*array) * height);

	if (width <= 0 || height <= 0 || array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(**array) * width);

		/* free() if failed */
		if (array[i] == NULL)
		{
			while (i--)
				free(array[i]);
			free(array);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width
 * @height:height
 *
 * Return: pointer to array on success , NULL on error
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		arr[a] =  malloc(sizeof(int) * width);

		if (arr[a] == NULL)
		{
			for (; a >= 0; a--)
				free(arr[a]);
			free(arr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			arr[a][b] = 0;
		}
	}
	return (arr);
}

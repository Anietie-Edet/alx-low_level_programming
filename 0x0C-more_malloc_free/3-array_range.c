#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: input
 * @max: input
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *s;
	int a, b;

	b = max - min + 1;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * b);

	if (s == NULL)
		return (NULL);

	for (a = 0; a < b; a++, min++)
		s[a] = min;
	return (s);
}

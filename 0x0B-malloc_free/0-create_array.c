#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * create_array - function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @c: param(initialized)
 *  @size: allocated byte num
 *
 *  Return: array , or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *array; 
		
		array = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	if (array == 0)
	{
		return (NULL);
	}
	while (size--)
	array[size] = c;
			return (array);
}

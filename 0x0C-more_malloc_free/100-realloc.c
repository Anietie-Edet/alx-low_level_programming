#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to prev. memory
 * @old_size: ptr size in bytes
 * @new_size: new memory size
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	s = malloc(new_size);

	if (s == NULL)
		return (NULL);
	free(ptr);
	return (s);
}

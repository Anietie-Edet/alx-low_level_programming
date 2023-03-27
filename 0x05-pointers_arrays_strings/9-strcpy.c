#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int mask = 0;

	while (mask >= 0)
	{
		*(dest + mask) = *(src + mask);
		if (*(src + mask) == '\0')
			break;
		mask++;
	}
	return (dest);
}



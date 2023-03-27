#include "main.h"
#include <stdio.h>

/**
 *  *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int u = 0;
	int f = 0;

	while (*(src + u) != '\0')
	{
		u++;
	}
	for ( ; f < u ; u++)
	{
		dest[f] = src[f];
	}
	dest[u] = '\0';
	return (dest);
}


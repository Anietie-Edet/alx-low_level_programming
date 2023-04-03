#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory(stored)
 *@src: memory(copied)
 *@n: number of bytes
 *
 *Return: dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int h = 0;
	int t = n;

	for (; h < t; h++)
	{
		dest[h] = src[h];
		n--;
	}
	return (dest);
}


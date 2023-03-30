#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: argument value
 * @src: argument value
 * @n: argument value
 *
 * Return: value to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}


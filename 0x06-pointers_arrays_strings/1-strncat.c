#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * using at most n bytes from src
 * @dest: parameter value
 * @src: parameter value
 * @n: parameter value
 *
 * Return: value to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int e;
	int k;

	e = 0;
	while (dest[e] != '\0')
	{
		e++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[e] = src[k];
	e++;
	k++;
	}
	dest[e] = '\0';
	return (dest);
}


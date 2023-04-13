#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: bytes
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *s;

	if (s1 == NULL)
		a = 0;
	{
		for (a = 0; s1[a]; a++)
			;
	}
	if (s2 == NULL)
		b = 0;
	{
		for (b = 0; s2[b]; b++)
			;
	}
	if (b > n)
		b = n;
	c = a + n;
	s = malloc(sizeof(char) * (a + b) + 1);

	if (s == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		s[c] = s1[c];

	for (c = 0; c < b; c++)
		s[c + a] = s2[c];

	s[a + b] = '\0';
	return (s);
}

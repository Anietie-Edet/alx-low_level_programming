#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string(concatenated)
 * @s2: string(concatenated)
 *
 * Return: pointer to new string on success,NULL on error
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int a = 0;
	int b = 0;
	int length1 = 0;
	int length2 = 0;

	while (s1 || s1[length1] != '\0')
		length1++;
	while (s2 || s2[length2] != '\0')
		length2++;
	s3 = (char *)malloc((sizeof(char) * length1 + length2) + 1);
	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		while (a < length1)
		{
			s3[a] = s1[a];
			a++;
		}
	}
	if (s2)
	{
		while (a < (length1 + length2))
		{
			s3[a] = s2[b];
			a++;
			b++;
		}
	}
	s3[a] = '\0';
	return (s3);
}

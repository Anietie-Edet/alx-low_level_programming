#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: input argument value
 * @s2: input argument value
 *
 * Return: s1[e] - s2[e]
 */
int _strcmp(char *s1, char *s2)
{
	int e;

	e = 0;
	while (s1[e] != '\0' && s2[e] != '\0')
	{
		if (s1[e] != s2[e])
		{
			return (s1[e] - s2[e]);
		}
		e++;
	}
	return (0);
}


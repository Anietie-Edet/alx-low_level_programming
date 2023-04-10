#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
			{
				l++;
				break;
			}
			else if (accept[f + 1] == '\0')
				return (l);
		}
		s++;
	}
	return (l);
}

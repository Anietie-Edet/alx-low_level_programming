#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: input(string)
 * @needle: input(string)
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *u = haystack;
		char *h = needle;

		while (*u == *h && *h != '\0')
		{
			u++;
			h++;
		}
		if (*h == '\0')
			return (haystack);
	}
	return (0);
}

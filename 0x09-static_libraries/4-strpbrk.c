#include "main.h"

/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: input(string)
* @accept: input(string)
* Return: 0
*/

char *_strpbrk(char *s, char *accept)

{
		int o;
			while (*s)
			{
			for (o = 0; accept[o]; o++)
			{
			if (*s == accept[o])
				return (s);
			}
			s++;
		}
	return ('\0');
}

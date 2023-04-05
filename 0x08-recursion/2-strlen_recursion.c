#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int b = 0;

	if (*s != '\0')
	{
		++b;
		b += _strlen_recursion(++s);
	}
		return (b);
}

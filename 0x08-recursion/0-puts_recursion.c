#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
	else
		printf("\n");
}

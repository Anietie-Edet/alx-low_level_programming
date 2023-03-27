#include "main.h"
/**
 * print_rev - function that prints a string, in reverse, followed by new line.
 * @s: argument to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int m = 0;
	int o;

	while (*s != '\0')
	{
		m++;
		s++;
	}
	s--;
	for (o = m; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}


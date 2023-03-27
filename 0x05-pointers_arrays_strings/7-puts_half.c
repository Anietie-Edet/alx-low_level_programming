#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if number of char is odd, n = (length_of_the_string - 1) / 2
 * @str: argument to be printed
 * Return: half of the string
 */
void puts_half(char *str)
{
	int x, v, bin;

	bin = 0;

	for (x = 0; str[x] != '\0'; x++)
		bin++;

	v = (bin / 2);

	if ((bin % 2) == 1)
		v = ((bin + 1) / 2);

	for (x = v; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}


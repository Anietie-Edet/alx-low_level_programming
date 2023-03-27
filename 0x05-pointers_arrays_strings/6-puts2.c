#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: parameter to be printed
 * Return: output
 */
void puts2(char *str)
{
	int l = 0;
	int p = 0;
	char *j = str;
	int o;

	while (*j != '\0')
	{
		j++;
		l++;
	}
	p = l - 1;
	for (o = 0 ; o <= p ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}


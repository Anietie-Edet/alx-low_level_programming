#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: null.
 */
void print_most_numbers(void)
{
	int h;

	for (h = 48; h < 58; h++)
	{
		if (h != 50 && h != 52)
			_putchar(h);
	}
	_putchar('\n');
}


#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: null.
 */
void print_triangle(int size)
{
	int m, k;

	for (m = 0; m < size; m++)
	{
		for (k = 1; k < (size - m); k++)
			_putchar(' ');
		for (k--; k < size; k++)
			_putchar(35);
		if (m < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}


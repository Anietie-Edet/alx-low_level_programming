#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: null
 */
void print_number(int n)
{
	unsigned int v, q, count;

	if (n < 0)
	{
		_putchar(45);
		v = n * -1;
	}
	else
	{
		v = n;
	}

	q = v;
	count = 1;

	while (q > 9)
	{
		q /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((v / count) % 10) + 48);
	}
}


#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @g: parameter
 *
 * Return: k
 */

int print_last_digit(int g)
{
	int k;

	k = g % 10;
	if (g < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}

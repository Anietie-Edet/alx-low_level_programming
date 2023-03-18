#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char z;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (z = 'a' ; z <= 'f' ; z++)
		putchar(z);
	putchar('\n');
	return (0);
}

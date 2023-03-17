#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0
 */

int main(void)
{
	int h;

	for (h = 0 ; h < 10 ; h++)
		putchar(h + '0');
	putchar('\n');
	return (0);
}

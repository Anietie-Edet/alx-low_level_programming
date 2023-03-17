#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,with omit
 *
 * Return: 0
 */

int main(void)
{
	char y;

	for (y = 'a' ; y <= 'z' ; y++)
		if (y != 'q' && y != 'e')
			putchar(y);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	int e;

	for (e = 'z' ; e >= 'a' ; e--)
		putchar(e);
	putchar('\n');
	return (0);
}

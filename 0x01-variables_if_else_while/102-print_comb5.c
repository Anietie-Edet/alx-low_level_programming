#include <stdio.h>

/**
 * main - program that print all possible combinations of two two-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 0 ; a < 100 ; a++)
	{
		for (b = 1 ; b < 100 ; b++)
		{
			if (a < b && a != b)
			{
				putchar(a + '0');
				putchar(' ');
				putchar(b + '0');
				if (a != 98 && b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

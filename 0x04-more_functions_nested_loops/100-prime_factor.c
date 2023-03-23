#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int b, f;

	b = 612852475143;
	for (f = 2; f <= b; f++)
	{
		if (b % f == 0)
		{
			b /= f;
			f--;
		}

	}
	printf("%ld\n", f);
	return (0);
}


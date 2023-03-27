#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	int password[100];
	int m, add, n;

	add = 0;

	srand(time(NULL));

	for (m = 0; m < 100; m++)
	{
		password[m] = rand() % 78;
		add += (password[m] + '0');
		putchar(password[m] + '0');
		if ((2772 - add) - '0' < 78)
		{
			n = 2772 - add - '0';
			add += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}


#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int a, b, c, length, d, number;

	a = 0;
	b = 0;
	c = 0;
	length = 0;
	d = 0;
	number = 0;

	while (s[length] != '\0')
		length++;
	while (a < length && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			number = s[a] - '0';
				if (b % 2)
				number = -number;
				c = c * 10 + number;
				d = 1;
				if (s[a + 1] < '0' || s[a + 1] > '9')
					break;
				d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if successful, 1 on Error
 */

int main(int argc, char *argv[])
{
	int equals_to, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	equals_to = num1 * num2;

	printf("%d\n", equals_to);
	return (0);
}

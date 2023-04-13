#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 *_puts - prints a string, followed by a new line, to stdout.
 * @str: the input string
 * Return: nothing to return.
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * strNumbers - determines if string has only numbers
 * @str: input string
 * Return: 0 if false, 1 if true
 */
int strNumbers(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - multiply two positive numbers
 * @argc: arg count
 * @argv: args
 *
 * Return: integar
 */

int main(int argc, char *argv[])
{
	unsigned long digit;
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
			exit(98);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
				printf("Error\n");
					exit(98);
			}
		}
	}
	digit = atol(argv[1]) * atol(argv[2]);
			printf("%lu\n", digit);
			return (0);
}

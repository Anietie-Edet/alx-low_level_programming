#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * main - multiply two positive numbers
 * @argc: arg count
 * @argv: args
 *
 * Return: integar
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
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
			if (argv[a][b] < 48 || argv[a][b] > 57)
			{
				printf("Error\n");
					exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
			printf("%ld\n", mul);
			return (0);
}

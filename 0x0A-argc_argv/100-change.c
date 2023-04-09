#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins
 * @argc: argument number
 * @argv: argument array
 * Return: 0 on  Success, 1 on Error
 */

int main(int argc, char *argv[])
{
	int number, p, outcome;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	outcome = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (p = 0; p < 5 && number >= 0; p++)
	{
		while (number >= coins[p])
		{
			outcome++;
			number -= coins[p];
		}
	}
	printf("%d\n", outcome);
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0 on Success
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_number - check for digit in string value
* @str: string array
*
* Return: 0
*/

int check_number(char *str)
{
	unsigned int b;

	b = 0;
	while (b < strlen(str))
	{
		if (!isdigit(str[b]))
		{
			return (0);
		}
			b++;
	}
		return (1);
}
/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int b;
	int str_to_int;
	int value = 0;

	b = 1;

	while (b < argc)
	{
		if (check_number(argv[b]))
		{
			str_to_int = atoi(argv[b]);
			value += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
			b++;
	}
		printf("%d\n", value);
		return (0);
}

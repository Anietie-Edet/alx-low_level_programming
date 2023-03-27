#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string input
 * Return: reversed string
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int top = 0;
	int i;

	while (s[top] != '\0')
	top++;
	for (i = 0; i < top; i++)
	{
		top--;
		reverse = s[i];
		s[i] = s[top];
		s[top] = reverse;
	}
}


#include "main.h"
/**
 * string_toupper - function that change all lowercase
 * string letters to uppercase
 * @v: strings pointer
 *
 * Return: v
 */
char *string_toupper(char *v)
{
	int f;

	f = 0;
	while (v[f] != '\0')
	{
		if (v[f] >= 'a' && v[f] <= 'z')
			v[f] = v[f] - 32;
		f++;
	}
	return (v);
}


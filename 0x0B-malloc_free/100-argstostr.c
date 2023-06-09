#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argc
 * @av: argv
 *
 * Return: pointer to new string on success ,NULL on error
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;
		str = malloc(sizeof(char) * (d + 1));
		if (str == NULL)
			return (NULL);
		c = 0;

		for (a = 0; a < ac; a++)
		{
			for (b = 0; av[a][b]; b++)
			{
				str[c] = av[a][b];
				c++;
			}
			if (str[c] == '\0')
			{
				str[c++] = '\n';
			}
		}
		return (str);
}

#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * count_word - function to count the number of words in a string
 * @s: string
 *
 * Return: pointer
 */
int count_word(char *s)
{
	int count, c, t;

	count = 0;
	t = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			t++;
		}
	}
	return (t);
}

/**
 * **strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **pattern, *temp;
	int m, k = 0, length = 0, words, c = 0, start, stop;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	pattern = (char **) malloc(sizeof(char *) * (words + 1));
	if (pattern == NULL)
		return (NULL);

	for (m = 0; m <= length; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (c)
			{
				stop = m;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);

				while (start < stop)
				*temp++ = str[start++];
				*temp = '\0';
				pattern[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = m;
	}

	pattern[k] = NULL;

	return (pattern);
}

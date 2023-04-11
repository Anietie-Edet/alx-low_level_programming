#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be replicated
 *
 * Return: pointer to replicated string on sucess, Null on error
 */

char *_strdup(char *str)
{
	char *replica;
	unsigned int p;
	unsigned int length;

	replica = malloc(sizeof(char));

	p = 0;
	length = 0;

	/* check if the input string is NULL*/
	if (str == NULL)
	{
		return (NULL);
	}
	/* get the length of the input string*/
	while (str[length] != '\0')
		length++;
	/* allocate memory for the new string (+1 for null terminator*/
	replica = malloc((sizeof(char) * length) + 1);
	/* check of malloc failed to allocate memory*/
	if (replica == NULL)
		return (NULL);
	/* input string == new string*/
	while ((replica[p] = str[p]) != '\0')
		p++;
	/* return pointer to new string*/
		return (replica);
}

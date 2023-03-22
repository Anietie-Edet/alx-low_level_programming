#include "main.h"

/**
 * positive_or_negative - prints if integer is positive or negative
 *
 * @i: parameter to be checked
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}

#include "main.h"

/**
 * swap_int - Swaps the values of 2 integers.
 * @c: First parameter to be swapped.
 * @d: second parameter to be swapped.
 *
 * Return: void.
 */

void swap_int(int *c, int *d)
{
	int m = *c;
	*c = *d;
	*d = m;

}


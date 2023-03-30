#include "main.h"
/**
 * reverse_array - function that reverses content of an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int r;
	int g;

	for (r = 0; r < n--; r++)
	{
		g = a[r];
		a[r] = a[n];
		a[n] = g;
	}
}


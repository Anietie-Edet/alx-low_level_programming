#include "main.h"

int _sqrt_recursion2(int m, int k);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: input
 *
 * Return: n(sqrt) if successful , -1 on error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion2(n, 0));
}

/**
 * _sqrt_recursion2 - calculates to get natural sqrt of a number
 * @m: represents value of n
 * @k: iterator to value of n
 * Return: sqrt value
 */

int _sqrt_recursion2(int m, int k)
{
	if (k * k > m)
	{
		return (-1);
	}
	else if (k * k == m)
	{
		return (k);
	}
	else
		return (_sqrt_recursion2(m, k + 1));
}

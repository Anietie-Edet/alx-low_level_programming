#include "main.h"

int prime_number(int a, int c);

/**
 * is_prime_number - returns prime number integar
 * @n: integar number
 * Return: 1 if successful , 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, n - 1));
}

/**
 * prime_number - calculates for a prime number
 * @a: represents value of n
 * @b: iterates to value of n
 * Return: 1 of successful, otherwise 0
 */

int prime_number(int a, int c)
{
	if (c == 1)
	{
		return (1);
	}
	else if (a % c == 0)
	{
		return (0);
	}
	else
		return (prime_number(a, c - 1));
}

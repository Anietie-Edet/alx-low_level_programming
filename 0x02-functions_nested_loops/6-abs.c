#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @t: parameter to be printed
 *
 * Return: 0
 */

int _abs(int t)
{
	if (t < 0)
		t = -(t);
	else if (t >= 0)
		t = (t);
	return (t);
}

#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: int converted from  string
 */
int _atoi(char *s)
{
	int r, z, n, length, f, num;

	r = 0;
	z = 0;
	n = 0;
	length = 0;
	f = 0;
	num = 0;

	while (s[length] != '\0')
		length++;

	while (r < length && f == 0)
	{
		if (s[r] == '-')
			++z;

		if (s[r] >= '0' && s[r] <= '9')
		{
			num = s[r] - '0';
			if (z % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[r + 1] < '0' || s[r + 1] > '9')
				break;
			f = 0;
		}
		r++;
	}

	if (f == 0)
		return (0);

	return (n);
}


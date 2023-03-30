#include "main.h"
/**
 * leet - encode into 1337speak
 * @y: parameter inputed value
 * Return: value of y
 */
char *leet(char *y)
{
	int k, u;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; y[k] != '\0'; k++)
	{
		for (u = 0; u < 10; u++)
		{
			if (y[k] == s1[u])
			{
				y[k] = s2[u];
			}
		}
	}
	return (y);
}


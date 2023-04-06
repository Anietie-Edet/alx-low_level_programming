#include "main.h"

int palin_drome(char *s, int v, int length);

int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palin_drome(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: string's length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * palin_drome - checks the characters recursively for palindrome
 * @s: string
 * @v: iterator to the value of the string
 * @length: string's length
 *
 * Return: 1 if it is palindrome, 0 if not
 */

int palin_drome(char *s, int v, int length)
{
	if (*(s + v) != *(s + length - 1))
		return (0);
	if (v >= length)
		return (1);
	return (palin_drome(s, v + 1, length - 1));
}


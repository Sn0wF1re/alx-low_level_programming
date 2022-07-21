#include "main.h"
/**
 *comp - reverse and determine whether a string is a palindrome
 *@s: string
 *@x: small iterator
 *@y: bigger iterator
 *
 *Return: 1 if palindrome, 0 otherwise
 */
int comp(char *s, int x, int y)
{
	if (s[x] != s[y - 1])
	{
		return (0);
	}
	if (x >= y)
	{
		return (1);
	}
	return (comp(s, x + 1, y - 1));
}

/**
 *_strlen - find length of string
 *@s: string
 *
 *Return: string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}


/**
 *is_palindrome - determine whether a string is a palindrome
 *@s: string
 *
 *Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (!(*s))
	{
		return (1);
	}
	else
	{
		return (comp(s, 0, _strlen(s)));
	}
}

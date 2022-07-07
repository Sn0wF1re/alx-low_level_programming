#include "main.h"
/**
 *_isupper - check whether upper case or not
 *@c: integer to be checked
 *
 *Return: 1 if upper, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


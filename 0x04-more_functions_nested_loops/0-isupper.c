#include "main.h"
#include <ctype.h>
/**
 *_isupper - check whether upper case or not
 *@c: integer to be checked
 *
 *Return: 1 if upper, 0 if otherwise
 */
int _isupper(int c)
{
	int u = isupper(c);

	if (u > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


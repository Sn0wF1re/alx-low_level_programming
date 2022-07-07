#include "main.h"
/**
 *_isupper - check whether upper case or not
 *@c: letter to be checked
 *
 *Return: 1 if upper, 0 if otherwise
 */
int _isupper(int c)
{
	char y;
	int upper = 0;

	for (y = 'A'; y <= 'Z'; y++)
	{
		if (c == y)
		{
			upper = 1;
			break;
		}
	}
	return (upper);
}

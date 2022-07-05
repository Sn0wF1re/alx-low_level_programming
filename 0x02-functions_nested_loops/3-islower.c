#include "main.h"
/**
 *_islower - Returns 1 if lower case, 0 if otherwise
 *Return: 0 or 1 depending on condition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

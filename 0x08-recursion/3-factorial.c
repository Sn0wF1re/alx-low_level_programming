#include "main.h"
/**
 *factorial - returns factorial of given number
 *@n: integer to return its factorial
 *
 *Return: factorial of number or -1 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1 && n >= 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

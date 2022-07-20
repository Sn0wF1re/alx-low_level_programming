#include "main.h"
/**
 *_compare - power of two integers
 *@n: input integer
 *@x: iterator
 *
 *Return: -1 for error or the square root
 */
int _compare(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_compare(n, x + 1));
}


/**
 *_sqrt_recursion - return natural square root of a number
 *@n: integer to find its square root
 *
 *Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (_compare(n, 0));
}

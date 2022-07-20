#include "main.h"
/**
 *_prime - determine whether a number is prime
 *@n: integer
 *@x: iterator
 *
 *Return: 1 if prime, 0 otherwise
 */
int _prime(int n, int x)
{
	if (n % x == 0)
	{
		if (n == x)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (_prime(n, x + 1));
}

/**
 *is_prime_number - returns 1 if prime, 0 otherwise
 *@n: integer to be checked
 *
 *Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n < 0)
	{
		return (0);
	}
	return (_prime(n, 2));

}

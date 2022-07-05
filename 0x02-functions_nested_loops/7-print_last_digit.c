#include "main.h"
/**
 *print_last_digit - Print last digit of a number
 *@d: Number whose last digit is to be found
 *
 *Return: Last digit
 */
int print_last_digit(int d)
{
	int ld = d % 10;

	if (ld < 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (ld);
}

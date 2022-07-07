#include "main.h"
/**
 *print_numbers - print numbers 0-9
 *Return: 0
 */
void print_numbers(void)
{
	char ca;

		for (ca = '0'; ca <= '9'; ca++)
		{
			_putchar(ca);
		}
	_putchar('\n');
}

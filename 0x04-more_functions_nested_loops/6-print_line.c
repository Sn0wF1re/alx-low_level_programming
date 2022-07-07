#include "main.h"
/**
 *print_line - draws straight line
 *@n: variable
 *
 *Return: nothing
 */
void print_line(int n)
{
	int b;

	for (b = 0; n > b; b++)
	{
		if (n != 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

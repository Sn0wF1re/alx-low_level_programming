#include "main.h"
/**
 *print_diagonal - print diagonal
 *@n: variable
 *
 *Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (b = 0; n > b; b++)
	{
		for (a = 0; a < b; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

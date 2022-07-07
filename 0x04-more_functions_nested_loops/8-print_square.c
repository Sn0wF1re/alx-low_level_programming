#include "main.h"
/**
 *print_square - print square
 *@size: integer
 *
 *Return: void
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; size > x; x++)
	{
		for (y = 0; size > y; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 *print_triangle - print a triangle
 *@size: integer
 *
 *Return: nothing
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; size > x; x++)
	{
		for (y = size - 1; y > x; y--)
		{
			_putchar(' ');
		}
		for (y = 0; y < x; y++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}

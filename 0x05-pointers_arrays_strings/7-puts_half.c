#include "main.h"
/**
 *puts_half - prints half of a string
 *@str: string
 *
 *Return: nothing
 */
void puts_half(char *str)
{
	int x, last;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	last = (x + 1) / 2;
	for (x = last; str[x]; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}

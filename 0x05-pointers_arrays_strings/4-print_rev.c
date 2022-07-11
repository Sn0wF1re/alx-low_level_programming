#include "main.h"
/**
 *print_rev - print string in reverse, then new line
 *@s: string
 *
 *Return: nothing
 */
void print_rev(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	while (x--)
	{
		_putchar(*(s + x));
	}
	_putchar('\n');
}

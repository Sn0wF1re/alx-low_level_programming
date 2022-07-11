#include "main.h"
/**
 *_puts - Print a string followed by a new line
 *@str: string
 *
 *Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

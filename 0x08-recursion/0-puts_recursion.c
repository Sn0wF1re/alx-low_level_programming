#include "main.h"
/**
 *_puts_recursion - prints a string, followed by a new line
 *@s: string to be printed
 *
 *Returns: nothing
 */
void _puts_recursion(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		_putchar(s[x]);
		x++;
	}
	_putchar('\n');
}

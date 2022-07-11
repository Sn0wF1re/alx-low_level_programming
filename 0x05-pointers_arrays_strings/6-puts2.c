#include "main.h"
/**
 *puts2 - Print every other character in a string,
 *followed by a new line
 *@str: string
 *
 *Return: nothing
 */
void puts2(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
	}
	_putchar('\n');
}

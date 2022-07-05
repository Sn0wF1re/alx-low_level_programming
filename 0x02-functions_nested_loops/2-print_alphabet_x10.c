#include "main.h"
/**
 *print_alphabet_x10 - print alphabet 10x
 *Return: nothing
 */
void print_alphabet_x10(void)
{
	int n, ch;
	n = 1;

	while (n <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		n++;
		_putchar('\n');
	}
}

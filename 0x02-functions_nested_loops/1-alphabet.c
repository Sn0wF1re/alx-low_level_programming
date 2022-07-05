#include "main.h"
/**
 *print_alphabet - print alphabet lower case
 *@cha: Letters of alphabet
 *
 *Return: nothing
 */

void print_alphabet(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		_putchar(cha);
	}
	_putchar('\n');
}

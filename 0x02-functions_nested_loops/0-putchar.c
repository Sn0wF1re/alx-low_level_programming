#include "main.h"
/**
  *something - print something
  *Return: nothing
  */
void something(void)
{
	char *ch = "Win";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
}

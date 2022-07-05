#include "main.h"
/**
  *main - print something
  *Return: 0
  */
int main(void)
{
	char *ch = "Win";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}

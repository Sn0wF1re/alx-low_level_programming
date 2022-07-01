#include <stdlib.h>
#include <stdio.h>
/**
  *main - Print base 10 digits
  *Return: 0
  */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar((c % 10) + '0');
	}
	putchar('\n');
	return (0);
}

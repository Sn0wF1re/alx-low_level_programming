#include <stdlib.h>
#include <stdio.h>
/**
  *main - print alphabet from a to z
  *Return: 0
  */
int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}

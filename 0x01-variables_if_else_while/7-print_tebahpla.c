#include <stdlib.h>
#include <stdio.h>
/**
  *main - Print alphabet in reverse
  *Return: 0
  */
int main(void)
{
	char cl;

	for (cl = 'z'; cl >= 'a'; cl--)
	{
		putchar(cl);
	}
	putchar('\n');
	return (0);
}

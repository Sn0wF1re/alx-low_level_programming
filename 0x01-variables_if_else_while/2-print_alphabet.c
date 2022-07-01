#include <stdlib.h>
#include <stdio.h>
/**
  *main - print alphabet from a to z
  */
int main()
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
		putchar('\n');
	}
	return (0);
}

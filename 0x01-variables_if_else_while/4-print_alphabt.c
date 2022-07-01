#include <stdlib.h>
#include <stdio.h>
/**
  *main - print lowercase letters except 'e' and 'q'
  *Return: 0
  */
int main(void)
{
	char cl;

	for (cl = 'a'; cl <= 'z'; cl++)
	{
		if (cl == 'e' || cl == 'q')
		{
			continue;
		}
		putchar(cl);
	}
	putchar('\n');
	return (0);
}

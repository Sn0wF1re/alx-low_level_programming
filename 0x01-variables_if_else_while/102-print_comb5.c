#include <stdio.h>
/**
  *main - print possible combinations of 2 double digits
  *Return: 0
  */
int main(void)
{
	int x1, x2;

	for (x1 = 0; x1 < 99; x1++)
	{
		for (x2 = x1 + 1; x2 <= 99; x2++)
		{
			putchar((x1 / 10) + '0');
			putchar((x1 % 10) + '0');
			putchar(' ');
			putchar((x2 / 10) + '0');
			putchar((x2 % 10) + '0');

			if (x1 == 98 && x2 == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

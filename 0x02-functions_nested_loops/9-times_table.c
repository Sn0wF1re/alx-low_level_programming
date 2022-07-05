#include "main.h"
/**
 *times_table - Prints 9 times table starting from 0
 *rw = row, coln = column, res = current result
 *
 *Return: nothing
 */
void times_table(void)
{
	int rw, coln, res;

	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (coln = 1; coln <= 9; coln++)
		{
			res = (rw * coln);
			if ((res / 10) > 0)
			{
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((res % 10) + '0');

			if (coln < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

#include "variadic_functions.h"
/**
 *sum_them_all - sum up all parameters
 *@n: unsigned integer
 *
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sp;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(sp, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(sp, int);
	}
	va_end(sp);
	return (sum);
}

#include "variadic_functions.h"
/**
 *print_numbers - print numbers
 *@separator: pointer to string between numbers
 *@n: number of elements
 *
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(va);
}

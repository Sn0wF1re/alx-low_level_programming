#include "variadic_functions.h"
/**
 *print_strings - print strings
 *@separator: string printed between strings
 *@n: number of strings
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	char *s;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(va, char *);

		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(va);
}

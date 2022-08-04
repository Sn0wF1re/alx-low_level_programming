#include "variadic_functions.h"
/**
 *print_all - prints anything
 *@format: list of types of arguments passed to function
 *
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list va;
	int i = 0;
	char *separator = "", *str;

	va_start(va, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(va, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(va, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(va, double));
					break;
				case 's':
					str = va_arg(va, char *);
					if (!str)
					{
						printf("(nil)");
					}
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(va);
}

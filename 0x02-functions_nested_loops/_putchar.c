#include <unistd.h>

/**
 *_putchar - Writes to stdout character c
 *@c: character to be printed to standard output
 *
 *Return: output of c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

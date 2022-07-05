#include <unistd.h>

/**
 *_putchar - Writes to stdout character c
 *@c: character to be printed to standard output
 *
 *Return: 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

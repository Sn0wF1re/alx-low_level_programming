#include "main.h"
/**
 *get_bit - returns value of a bit at given index
 *@n: bit
 *@index: index of bit
 *
 *Return: value of bit at index, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

#include "main.h"
/**
 *set_bit - sets the value of a bit to 1 at given index
 *@n: pointer to bit
 *@index: index at which to set bit to 1
 *
 *Return: 1 if successful, -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}


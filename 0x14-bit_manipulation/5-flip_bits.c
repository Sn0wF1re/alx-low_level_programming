#include "main.h"
/**
 *flip_bits - returns number of bits needed to be flipped
 *to get from one number to another
 *@n: number to be flipped
 *@m: number that n is to be flipped to
 *
 *Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned long int count = 0;

	while (flipped > 0)
	{
		count += (flipped & 1);
		flipped >>= 1;
	}

	return (count);
}

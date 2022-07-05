#include "main.h"
/**
 *_abs - Computes absolute value of an integer
 *@ab: Input
 *
 *Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}

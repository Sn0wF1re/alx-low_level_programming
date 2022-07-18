#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - print sum of two diagonals of a square matrix of integers
 *@a: matrix
 *@size: size of matrix
 *
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int x = 0, s1 = 0, s2 = 0;

	while (x < size)
	{
		s1 += *(a + x * size + x);
		s2 += *(a + x * size + size - x - 1);

		x++;
	}
	printf("%d, %d\n", s1, s2);
}

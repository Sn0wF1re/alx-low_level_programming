#include "main.h"
#include <stdio.h>
/**
 *print_array - Function that prints n elements of an array
 *of integers, followed by a new line
 *@a: integer array
 *@n: Elements to be printed from array
 *
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(", ");
		}
		x++;
	}
	printf("\n");
}

#include "main.h"
/**
 *reverse_array - Reverse an array
 *@a: Pointer to array to be reversed
 *@n: Number of elements in array
 *
 *Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}

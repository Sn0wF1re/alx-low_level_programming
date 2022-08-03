#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: input array
 *@size: size of array
 *@cmp: pointer to function to compare values
 *
 *Return: index of first element for which cmp does not return 0,
 *-1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		while (x < size)
		{
			if (cmp(array[x]))
			{
				return (x);
			}
			x++;
		}
	}
	return (-1);
}

#include "search_algos.h"
/**
 *linear_search - searches for a value in an array of integers
 *using the Linear search algorithm
 *@array: pointer to first element of array to search in
 *@size: number of elements in array
 *@value: value to search for
 *
 *Return: first index where value is located,
 *        -1 if array is NULL or value not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]); 
		if (array[i] == value)
			return ((int) i);
		i++;
	}
	return (-1);
}

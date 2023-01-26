#include "search_algos.h"
/**
 *binary_search - searches for a value in a sorted array of integers
 *using the Binary search algorithm
 *@array: pointer to first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 *
 *Return: -1 if value not in array or empty array,
 *        otherwise index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, i;

	if (!array)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;

		if (array[i] == value)
			return (i);
		if (array[i] < value)
			low = i + 1;
		else
			high = i - 1;
	}
	return (-1);
}

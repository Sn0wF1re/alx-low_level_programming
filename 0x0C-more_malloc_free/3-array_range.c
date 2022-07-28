#include "main.h"
/**
 *array_range - creates array of integers
 *@min: integer
 *@max: integer
 *
 *Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int *arr, x;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++)
	{
		arr[x] = min;
		min++;
	}
	return (arr);
}

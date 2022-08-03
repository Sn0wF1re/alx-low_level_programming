#include "function_pointers.h"
/**
 *array_iterator - executes a function given as a parameter
 *on each element of an array
 *@array: input array
 *@size: size of array
 *@action: pointer to function being used
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array && action)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}

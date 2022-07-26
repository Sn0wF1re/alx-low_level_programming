#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates array of chars, initialized with specific character
 *@size: size of array
 *@c: character
 *
 *Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)  malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}

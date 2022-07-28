#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: integer
 *
 *Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
	{
		return (NULL);
	}
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

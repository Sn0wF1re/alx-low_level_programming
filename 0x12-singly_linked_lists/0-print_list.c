#include "lists.h"
/**
 *print_list - returns element of list_t
 *@h: singly linked list
 *
 *Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *pointer = h;

	while (pointer != NULL)
	{
		if (pointer->str != NULL)
		{
			printf("[%d] %s\n", pointer->len, pointer->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		pointer = pointer->next;
	}
	return (count);
}

#include "lists.h"
/**
 *list_len - returns number of elements in a linked list
 *@h: singly linked list
 *
 *Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
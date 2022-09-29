#include "lists.h"
/**
 *dlistint_len - returns no. of elements in dlistint_t list
 *@h: dlistint_t list head
 *
 *Return: number of elements in dlistint_int list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}

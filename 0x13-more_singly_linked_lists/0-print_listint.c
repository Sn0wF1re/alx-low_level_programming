#include "lists.h"
/**
 * print_listint - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *list = h;

	while (list != NULL)
	{
		printf("%i\n", list->n);
		list = list->next;
		count++;
	}
	return (count);
}

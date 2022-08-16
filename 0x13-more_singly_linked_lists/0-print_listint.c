#include "lists.h"
/**
 *print_listint - prints all elements in a listint_t list
 *@h: pointer to list to be printed
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *list = h;
	size_t count = 0;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next;
		count++;
	}
	return (count);
}

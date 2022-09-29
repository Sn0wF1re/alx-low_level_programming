#include "lists.h"
/**
 *sum_dlistint - return sum of all data of a dlistint_t list
 *@head: head of dlistint_t list
 *
 *Return: sum of all data, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (!head)
			return (0);
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

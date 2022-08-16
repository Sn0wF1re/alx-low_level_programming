#include "lists.h"
/**
 *sum_listint - return sum of data(n) in listint_t list
 *@head: linked list
 *
 *Return: 0 if list is empty, sum otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

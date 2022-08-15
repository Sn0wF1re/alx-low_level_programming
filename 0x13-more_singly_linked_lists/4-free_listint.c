#include "lists.h"
/**
 *free_listint - free memory from listint_t list
 *@head: list to be freed
 *
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *current;

	current = head;
	if (head != NULL)
	{
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
	}
}

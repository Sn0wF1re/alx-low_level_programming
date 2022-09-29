#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts new node at given position
 *@h: head for dlistint_t linked list
 *@idx: position to insert new node
 *@n: data for new node
 *
 *Return: address of new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *current;
	unsigned int x;

	if (idx == 0)
		return (add_dnodeint(h, n));

	else
	{
		current = *h;
		x = 1;
		if (current != NULL)
		{
			while (current->prev != NULL)
				current = current->prev;
		}
		while (current != NULL)
		{
			if (x == idx)
			{
				if (current->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = current->next;
						new_node->prev = current;
						current->next->prev = new_node;
						current->next = new_node;
					}
				}
				break;
			}
			current = current->next;
			x++;
		}
	}
	return (new_node);
}

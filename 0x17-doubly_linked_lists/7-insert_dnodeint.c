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
	dlistint_t *new_node = NULL, *current = *h;
	unsigned int x = 1;


	if (idx == 0)
		return (add_dnodeint(h, n));

	if (current)
	{
		while (current->prev)
			current = current->prev;
	}

	while (current)
	{
		if (x == idx)
		{
			if (current->next == NULL)
				new_node = add_dnodeint_end(h, n);
			else
			{
				new_node = malloc(sizeof(dlistint_t));
				if (new_node)
				{
					new_node->n = n;
					new_node->next = current->next;
					current->next = new_node;
					current->next->prev = new_node;
					new_node->prev = current;
				}
			}
			break;
		}
		current = current->next;
		x++;
	}
	return (new_node);
}

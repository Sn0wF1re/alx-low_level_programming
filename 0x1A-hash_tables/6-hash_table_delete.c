#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: pointer to a hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *current = ht;
	hash_node_t *element, *temp;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			element = ht->array[i];
			while (element)
			{
				temp = element->next;
				free(element->key);
				free(element->value);
				free(element);
				element = temp;
			}
		}
		i++;
	}
	free(current->array);
	free(current);
}

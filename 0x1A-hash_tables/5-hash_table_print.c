#include "hash_tables.h"
/**
 *hash_table_print - prints a hash table
 *@ht: hash table
 *
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *element;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			element = ht->array[i];
			while (element != NULL)
			{
				printf("'%s': '%s'", element->key, element->value);
				element = element->next;
				if (element != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}

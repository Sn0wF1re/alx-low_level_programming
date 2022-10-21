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
	unsigned long int i = 0;
	unsigned char comma = 0;

	if (!ht)
		return;

	printf("{");

	while (i < ht->size)
	{
		element = ht->array[i];
		if (element)
		{
			if (comma == 1)
				printf(", ");
			while (element)
			{
				printf("'%s' : '%s'", element->key, element->value);
				element = element->next;
				if (element)
					printf(", ");
			}
			comma =1;
		}

		i++;
	}
	printf("}\n");
}

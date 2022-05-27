#include "hash_tables.h"

/**
 * hash_table_print - Prints out a HashTable
 *
 * @ht: HashTable
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t ht_size = 0, flag = 0;
	hash_node_t *aux = NULL, *exists = NULL;

	if (!ht)
		return;
	putchar(123);
	while (ht_size < ht->size)
	{
		if (ht->array[ht_size])
			exists = ht->array[ht_size];
		ht_size++;
	}

	if (exists)
	{
		ht_size = 0;
		while (ht_size < ht->size)
		{
			aux = ht->array[ht_size];
			if (aux && aux->key)
			{
				if (flag == 1)
					printf(", ");
				while (aux)
				{
					printf("'%s': '%s'", aux->key, aux->value);
					if (!aux->next)
						break;
					aux = aux->next;
				}
				if (flag == 0)
					flag++;
			}
			ht_size++;
		}
	}
	putchar(125);
	putchar(10);
}

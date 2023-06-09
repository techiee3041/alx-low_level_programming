#include "hash_tables.h"
/**
 * hash_table_get - Retrieves the value associated with a key
 * @ht: The hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);  /* Invalid input parameters */

	/* Traverse the linked list at the specified index */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);  /* Key found, return the associated value */

		node = node->next;
	}

	return (NULL);  /* Key not found */
}

#include "hash_tables.h"
/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to add/update the key/value pair in
 * @key: The key to add/update
 * @value: The value associated with the key
 *
 * Return: 1 if the operation succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists in the hash table */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			/* Key already exists, update the value */
			free(node->value);
			node->value = strdup(value);
			return (1);  /* Success */
		}
		node = node->next;
	}

	/* Key doesn't exist, create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);  /* Failed to allocate memory */

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);  /* Success */
}

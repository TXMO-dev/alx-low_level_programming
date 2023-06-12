#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table,
 *         or NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
hash_node_t **array;
unsigned long int i;
if (size == 0)
{
return (NULL);
}
ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
{
return (NULL);
}
array = malloc(sizeof(hash_node_t *) * size);
if (array == NULL)
{
free(ht);
return (NULL);
}
ht->size = size;
ht->array = array;
for (i = 0; i < size; i++)
{
ht->array[i] = NULL;
}
return (ht);
}

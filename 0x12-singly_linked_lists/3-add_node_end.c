#include "lists.h"
#include <string.h>
/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: Pointer to the head of the list.
* @str: String to be stored in the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
unsigned int len = 0;
if (!head)
{
return (NULL);
}
last_node = *head;
while (last_node && last_node->next)
{
last_node = last_node->next;
len++;
}
new_node = malloc(sizeof(list_t));
if (!new_node)
{
return (NULL);
}
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
if (last_node)
{
last_node->next = new_node;
}
else
{
*head = new_node;
}
return (new_node);
}

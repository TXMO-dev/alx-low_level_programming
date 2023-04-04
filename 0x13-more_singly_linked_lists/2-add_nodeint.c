#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @head: pointer to pointer of first node of listint_t list.
* @n: integer to be added to new node.
*
* Return: address of the new element or NULL if it fails.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = NULL;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

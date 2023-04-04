#include "lists.h"
#include <stdlib.h>
/**
* free_listint - frees a listint_t linked list
* @head: pointer to head of list
**/
void free_listint(listint_t *head)
{
listint_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}

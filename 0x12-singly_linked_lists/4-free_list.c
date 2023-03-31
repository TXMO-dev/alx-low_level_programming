#include "lists.h"
#include <stdlib.h>
/**
* free_list - Frees a list_t list
* @head: A pointer to the beginning of the list
*
* Return: void
*/
void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}

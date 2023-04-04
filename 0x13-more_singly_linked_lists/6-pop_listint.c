#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* returns the head node’s data (n).
* @head: pointer to a pointer to the head node of the linked list
*
* Return: the head node's data (n), or 0 if the linked list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (*head == NULL)
{
return (0);
}
temp = *head;
n = (*head)->n;
*head = (*head)->next;
free(temp);
return (n);
}

#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
* struct list_s - singly linked list node
* @str: string stored in the node
* @len: length of the string
* @next: pointer to the next node
*
* Description: This struct defines a node in a singly linked list. It contains
* a string and its length, as well as a pointer to the next node in the list.
*/
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif /* MAIN_H */

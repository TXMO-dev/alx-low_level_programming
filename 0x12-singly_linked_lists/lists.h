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
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif /* MAIN_H */

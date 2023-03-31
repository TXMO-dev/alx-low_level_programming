#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the head of the list
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
char *nil = "(nil)";
while (h != NULL)
{
size_t i;
char *str = h->str;
unsigned int len = h->len;
if (str == NULL)
{
str = nil;
len = 0;
}
for (i = 0; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
count++;
h = h->next;
}
return (count);
}

#ifndef LISTS_H
#define LISTS_H

typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;

#endif /* LISTS_H */

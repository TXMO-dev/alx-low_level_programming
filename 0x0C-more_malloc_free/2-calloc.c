#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 *           and returns a pointer to the allocated memory
 * @nmemb: the number of elements in the array
 * @size: the size of each element in bytes
 *
 * Return: On success, a pointer to the allocated memory
 *         On failure, NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
ptr[i] = 0;
}
return ((void *) ptr);
}

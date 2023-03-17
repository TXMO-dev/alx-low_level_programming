#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated with malloc
* @old_size: the size, in bytes, of the allocated space for ptr
* @new_size: the new size, in bytes of the new memory block
*
* Return: pointer to the new memory block, or NULL if it fails
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr = NULL;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
free(ptr);
return (new_ptr);
}

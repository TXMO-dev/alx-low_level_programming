#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Frees memory allocated for a dog struct
* @d: Pointer to dog struct to be freed
*
* Return: void
*/
void free_dog(dog_t *d)
{
if (d != NULL) /* Check if pointer is not NULL */
{
free(d->name);
free(d->owner);
free(d);
}
}

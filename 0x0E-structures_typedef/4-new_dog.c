#include <stdlib.h>
#include "dog.h"
/**
* new_dog - creates a new dog struct
* @name: The name of the new dog
* @age: The age of the new dog
* @owner: The owner of the new dog
*
* Return: A pointer to the new dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int name_len, owner_len;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
for (name_len = 0; name[name_len] != '\0'; name_len++)
{
;
}
new_dog->name = malloc(name_len + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
for (name_len = 0; name[name_len] != '\0'; name_len++)
{
new_dog->name[name_len] = name[name_len];
}
new_dog->name[name_len] = '\0';
for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
{
;
}
new_dog->owner = malloc(owner_len + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
{
new_dog->owner[owner_len] = owner[owner_len];
}
new_dog->owner[owner_len] = '\0';
new_dog->age = age;
return (new_dog);
}

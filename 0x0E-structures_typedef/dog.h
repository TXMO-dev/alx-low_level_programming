#ifndef DOG_H
#define DOG_H
/**
* struct dog - a dog struct
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Description: a struct that stores information about a dog
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

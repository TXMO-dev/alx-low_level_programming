#include "function_pointers.h"
/**
* print_name - prints a name
* @name: name to print
* @f: pointer to a function that takes a char pointer
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}

#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: the array to search in
* @size: the number of elements in the array
* @cmp: the function used to compare values
*
* Return: the index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}

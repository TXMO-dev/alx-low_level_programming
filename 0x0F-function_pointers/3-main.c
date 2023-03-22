#include "3-calc.h"
/**
* main - performs simple operations
* @argc: number of arguments passed to the program
* @argv: array of arguments passed to the program
*
* Return: 0 on success, 98, 99, or 100 on failure
*/
int main(int argc, char *argv[])
{
int a, b, result;
int (*op_func)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
}

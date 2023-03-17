#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two positive numbers
* @argc: number of arguments passed to the program
* @argv: array of pointers to the arguments
*
* Return: 0 on success, 98 on failure
*/
int main(int argc, char *argv[])
{
int i, j;
long int mul = 0;
if (argc != 3)
{
printf("Error\n");
return (98);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (98);
}
}
}
mul = atol(argv[1]) * atol(argv[2]);
printf("%ld\n", mul);
return (0);
}

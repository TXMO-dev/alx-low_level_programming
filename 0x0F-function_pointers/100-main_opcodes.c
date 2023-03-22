#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the opcodes of its own main function
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
int i, n;
if (argc != 2)
{
printf("Error\n");
return (1);
}
n = atoi(argv[1]);
if (n <= 0)
{
printf("Error\n");
return (2);
}
char *ptr = (char *)main;
for (i = 0; i < n; i++)
{
printf("%02hhx", ptr[i]);
if (i != n - 1)
{
printf(" ");
}
}
printf("\n");
return (0);
}

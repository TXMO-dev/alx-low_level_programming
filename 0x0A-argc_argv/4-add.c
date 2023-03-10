#include <stdio.h>
#include <stdlib.h>

/**
* is_positive_number - checks if a string contains a positive integer
* @s: the string to check
*
* Return: 1 if s is a positive integer, 0 otherwise
*/
int is_positive_number(char *s)
{
if (*s == '\0')
{
return (0);
}
while (*s != '\0')
{
if (*s < '0' || *s > '9')
{
return (0);
}
s++;
}
return (1);
}

/**
* main - adds positive numbers passed as command-line arguments
* @argc: the number of command-line arguments
* @argv: an array of pointers to the command-line arguments
*
* Return: 0 if successful, 1 otherwise
*/
int main(int argc, char *argv[])
{
int sum = 0;
int i;
for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}

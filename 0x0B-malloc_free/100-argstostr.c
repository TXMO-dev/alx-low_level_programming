#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of the program
* @ac: argument count
* @av: argument vector
*
* Return: pointer to concatenated string or NULL on failure
*/
char *argstostr(int ac, char **av)
{
int i, j, len = 0, k = 0;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
len++;
}
len++;
}
str = malloc(sizeof(char) * len);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}

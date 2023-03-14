#include "main.h"
#include <stdlib.h>
/**
* count_words - Counts the number of words in a string.
* @str: The string to count the words of.
*
* Return: The number of words in the string.
*/
static int count_words(char *str)
{
int count = 0;
char *p = str;
while (*p)
{
if (*p != ' ')
{
++count;
while (*p && *p != ' ')
{
++p;
}
}
else
{
++p;
}
}
return (count);
}

/**
* strtow - Splits a string into words.
* @str: The string to split.
*
* Return: If str is NULL, empty, or on failure - NULL.
*         Otherwise - a pointer to the array of words.
*/
char **strtow(char *str)
{
char **words;
int i, j, k, count, len;
if (str == NULL || *str == '\0')
{
return (NULL);
}
count = count_words(str);
words = malloc((count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
i = 0;
while (*str)
{
if (*str == ' ')
{
++str;
}
else
{
len = 0;
while (str[len] && str[len] != ' ')
{
++len;
}
words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (j = 0; j < i; ++j)
{
free(words[j]);
}
free(words);
return (NULL);
}
for (k = 0; k < len; ++k)
{
words[i][k] = str[k];
}
words[i][k] = '\0';
++i;
str += len;
}
}
words[i] = NULL;
return (words);
}

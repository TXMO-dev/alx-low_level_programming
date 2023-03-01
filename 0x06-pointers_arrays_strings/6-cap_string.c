/**
* cap_string - Capitalizes all words of a string.
*
* @str: The string to be capitalized.
*
* Return: A pointer to the resulting string @str.
*/
char *cap_string(char *str)
{
int i;
if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] -= 32;
}
for (i = 1; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
}
}
else
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] += 32;
}
}
}
return (str);
}

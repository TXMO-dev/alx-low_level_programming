/**
* leet - Encodes a string into 1337.
*
* @str: The string to be encoded.
*
* Return: A pointer to the resulting string @str.
*/
char *leet(char *str)
{
int i, j;
char leet_map[256] = {0};
for (i = 0; "aAeEoOtTlL"[i]; i++)
{
leet_map["aAeEoOtTlL"[i]] = "44337011"[i];
}
for (i = 0; str[i] != '\0'; i++)
{
if (leet_map[str[i]])
{
str[i] = leet_map[str[i]];
}
}
return (str);
}

/**
* leet - Encodes a string into 1337.
*
* @str: The string to be encoded.
*
* Return: A pointer to the resulting string @str.
*/
char *leet(char *str)
{
char *letters = "AEOTLaeotl";
char *leet_codes = "43071";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = leet_codes[j / 5] + (j % 5);
break;
}
}
}
return (str);
}

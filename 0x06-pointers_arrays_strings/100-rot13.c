/**
* rot13 - Encodes a string using ROT13 encryption.
*
* @str: The string to be encoded.
*
* Return: A pointer to the resulting string @str.
*/
char *rot13(char *str)
{
int i, j;
char *lower = "abcdefghijklmnopqrstuvwxyz";
char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 26; j++)
{
if (str[i] == lower[j])
{
str[i] = lower[(j + 13) % 26];
break;
}
else if (str[i] == upper[j])
{
str[i] = upper[(j + 13) % 26];
break;
}
}
}
return (str);
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: the string to check
*
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len;
if (*s == '\0')
{
return (1);
}
len = strlen(s) - 1;
if (*s != s[len])
{
return (0);
}
s[len] = '\0';
return (is_palindrome(s + 1));
}

/**
*_atoi - converts a string to an integer.
*@s: the string to be converted.
*Return: the converted integer.
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int res = 0;
while (*s)
{
if (*s == '-')
{
sign *= -1;
}
if (*s >= '0' && *s <= '9')
{
res = (res * 10) + (*s - '0');
}
if (*s == ';')
{
break;
}
s++;
}
return (sign * res);
}

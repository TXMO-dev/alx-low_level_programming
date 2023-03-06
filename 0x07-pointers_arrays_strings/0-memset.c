/**
* _memset - fills memory with a constant byte
* @s: pointer to memory area to be filled
* @b: value to be set (treated as unsigned char)
* @n: number of bytes to be set to the value
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *p = s;
for (i = 0; i < n; i++)
{
*p++ = b;
}
return (s);
}

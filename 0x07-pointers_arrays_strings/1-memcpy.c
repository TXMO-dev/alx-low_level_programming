/**
* _memcpy - copies memory area
* @dest: pointer to destination memory area
* @src: pointer to source memory area
* @n: number of bytes to be copied
*
* Return: pointer to destination memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *pdest = dest;
char *psrc = src;
for (i = 0; i < n; i++)
{
*pdest++ = *psrc++;
}
return (dest);
}

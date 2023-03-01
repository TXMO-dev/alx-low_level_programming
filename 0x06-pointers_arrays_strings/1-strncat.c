/**
* _strncat - Concatenates two strings up to a maximum of n bytes.
*
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of bytes to concatenate from src.
*
* Return: A pointer to the resulting string @dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

#include <stdio.h>
/**
*main - entry point of the fibonacci program
*
*Return: 0 on success
*/
int main(void)
{
int current = 1, previous = 1, sum = 0;
while (current <= 4000000)
{
if (current % 2 == 0)
{
sum += current;
}
int next = current + previous;
previous = current;
current = next;
}
printf("%d\n", sum);
return (0);
}

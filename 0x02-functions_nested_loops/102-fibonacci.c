#include <stdio.h>
/**
*main - entry point of the fibonacci program
*
*Return: 0 on success
*/
int main(void)
{
int n, t1 = 1, t2 = 2, next_term;
printf("%d, %d", t1, t2);
for (n = 3; n <= 50; n++)
{
next_term = t1 + t2;
printf(", %d", next_term);
t1 = t2;
t2 = next_term;
}
printf("\n");
return (0);
}


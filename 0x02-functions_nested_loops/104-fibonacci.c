#include <stdio.h>
/**
*main - entry point of the program
*
*Return: 0 on success
*/
int main(void)
{
unsigned long fib_curr = 1;
unsigned long fib_prev = 1;
unsigned long fib_next;
printf("%lu, %lu", fib_prev, fib_curr);
for (int i = 2; i < 98; i++)
{
fib_next = fib_curr + fib_prev;
printf(", %lu", fib_next);
fib_prev = fib_curr;
fib_curr = fib_next;
}
printf("\n");
return (0);
}

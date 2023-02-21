#include <stdio.h>
/**
*main - entry point of the fibonacci program
*
*Return: 0 on success
*/
int main(void)
{
int num1 = 1, num2 = 2, next_num;
int count = 0;
printf("%d, %d", num1, num2);
count = 2;
while (count < 50)
{
next_num = num1 + num2;
printf(", %d", next_num);
num1 = num2;
num2 = next_num;
count++;
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
*main - entry point of the program
*
*Return: 0 on success
*/
int main(void)
{
int sum = 0;
for (int i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
int num_digits = 0;
int temp = sum;
while (temp > 0)
{
num_digits++;
temp /= 10;
}
char str_num_digits[num_digits];
sprintf(str_num_digits, "%d", sum);
for (int i = 0; i < num_digits; i++)
{
putchar(str_num_digits[i]);
}
putchar('\n');
return (0);
}

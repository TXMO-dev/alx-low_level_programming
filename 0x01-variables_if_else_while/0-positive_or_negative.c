#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints if a random number is positive, negative or zero
 * Return: always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive");
}
else if (n == 0)
{
printf("is zero");
}
else
{
printf("is negative");
}
return (0);
}

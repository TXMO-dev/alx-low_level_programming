/**
* is_divisible - checks if n is divisible by i
* @n: the number to check
* @i: the divisor to check
*
* Return: 1 if n is divisible by i, 0 otherwise
*/
int is_divisible(int n, int i);
/**
* is_prime_number - checks if a given number is prime
* @n: the number to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (1);
}
if (n % 2 == 0)
{
return (0);
}
return (is_divisible(n, 3));
}
/**
* is_divisible - checks if n is divisible by i
* @n: the number to check
* @i: the divisor to check
*
* Return: 1 if n is divisible by i, 0 otherwise
*/
int is_divisible(int n, int i)
{
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_divisible(n, i + 2));
}

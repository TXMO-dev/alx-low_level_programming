/**
* factorial - Returns the factorial of a given number.
* @n: The number to get the factorial of.
*
* Return: The factorial of n. If n is less than 0, return -1.
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}

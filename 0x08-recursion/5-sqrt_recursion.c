int find_sqrt(int n, int low, int high);
/**
* _sqrt_recursion - finds the natural square root of a number
* @n: the number to find the square root of
*Return: the natural square root of n
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (find_sqrt(n, 0, n / 2));
}

/**
* find_sqrt - recursively finds the square root of a number using binary search
* @n: the number to find the square root of
* @low: the lower bound of the search range
* @high: the upper bound of the search range
*
* Return: the square root of n, or -1 if n does not have a natural square root
*/
int find_sqrt(int n, int low, int high)
{
int mid = (low + high) / 2;
if (mid * mid == n)
{
return (mid);
}
if (low >= high)
{
return (-1);
}
if (mid * mid > n)
{
return (find_sqrt(n, low, mid - 1));
}
return (find_sqrt(n, mid + 1, high));
}

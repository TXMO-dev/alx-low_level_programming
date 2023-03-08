/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: the number.
*
* Return: the natural square root of n.
* if n does not have a natural square root.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (find_sqrt(n, 1, n));
}
}

/**
* find_sqrt - finds the natural square root of a number.
* @n: the number.
* @low: the lower bound of the search.
* @high: the upper bound of the search.
* Return: the natural square root of n.
*if n does not have a natural square root.
*/
int find_sqrt(int n, int low, int high)
{
int mid;
if (high >= low)
{
mid = (low + high) / 2;
if (mid *mid == n)
{
return (mid);
}
else if (mid *mid > n)
{
return (find_sqrt(n, low, mid - 1));
}
else
{
return (find_sqrt(n, mid + 1, high));
}
}
return (-1);
}

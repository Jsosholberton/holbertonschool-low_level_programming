#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is the original number
 * @i: is the variable to be the response
 *
 * Return: the response
 */
int cal_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
{
return (cal_sqrt(n, 0));
}
}
/**
 * cal_sqrt - is the comodin for obtains the response
 * @n: original value
 * @i: to calculate
 *
 * Return: the response
 */
int cal_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
else if (i * i == n)
return (i);
else
return (cal_sqrt(n, i + 1));
}

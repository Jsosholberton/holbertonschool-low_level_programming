#include "main.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y.
 * @x: variable 1
 * @y: variable 2
 *
 * Return: returns the response.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}

#include "main.h"
/**
 * print_sing - print the sing of the digit
 * @n: digit variable
 *
 * return -  1 if is positive, 0 if is zero, and -1 if is negative
 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if  (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}

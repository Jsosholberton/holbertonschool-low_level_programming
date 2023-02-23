#include "main.h"
/**
 * print_sign - print the sing of the digit
 * @n: digit variable
 *
 * Description: print if is positive + and return 1, if is negative print - and return -1, if is 0 print 0 and return 0
 * header:  1 if is positive, 0 if is zero, and -1 if is negative
 * Return: return 1 if is positive, -1 if is negative, 0 if is 0
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

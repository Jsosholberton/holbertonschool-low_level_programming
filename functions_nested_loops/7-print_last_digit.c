#include "main.h"
/**
 * print_last_digit - print the last digit
 * @r: variable initial ; @t: digit
 *
 * Description: print the last digit of a variables
 * header: view the command
 * Return: ever t as response
 */
int print_last_digit(int r)
{
int t = r % 10;
if (t < 0)
t *= -1;
_putchar (t + '0');
return (t);
}

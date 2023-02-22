#include "main.h"
/**
 *_print_last_digit: print the last digit
 *@r: variable initial
 *@t: variable positive
 *_putchar: print the last digit
 *return: ever 0
 */
int print_last_digit(int r)
{
int t = r % 10;
if (t < 0)
t *= -1;
_putchar (t + '0');
return (0);
}

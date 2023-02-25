#include "main.h"
/**
 * more_numbers - print 10 times the number from 0 to 14
 *
 * Return: no data
 */
void more_numbers(void)
{
int c = 1, n;
while (c++ <= 10)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}

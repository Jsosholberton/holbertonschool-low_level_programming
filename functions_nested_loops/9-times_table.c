#include "main.h"
/**
 * times_table - check the code
 * @n, @z, @y, variables to work
 *
 * Description: times table
 * header: print the response
 * Return: always 0.
 *
 */
void times_table(void)
{
int n, z, y;

for (n = 0; n <= 9; n++)
{
_putchar('0');
for (z = 1; z <= 9; z++)
{
_putchar(',');
_putchar(' ');

y = n * z;

if (y <= 9)
_putchar(' ');
else
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}

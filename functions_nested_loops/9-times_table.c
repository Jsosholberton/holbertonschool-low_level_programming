#include "main.h"
/**
 * main - check the code
 *
 * Return: always 0.
 * times_table - Prins the table
 *
 */
void times_table(void)
{
int n, z, y;

for (n = 0;n <= 9; n++)
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

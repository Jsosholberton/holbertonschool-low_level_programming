#include "main.h"
/**
 * print_diagonal - print the diagonal n times, n espc
 * @n: numer of times of diagonal
 *
 * Return: no data
 */
void print_diagonal(int n)
{
int d, esp;
if (n > 0)
{
for (d = 0; d < n; d++)
{
for (esp = 0; esp < d; esp++)
_putchar(' ');
_putchar('\\');
if (d == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}

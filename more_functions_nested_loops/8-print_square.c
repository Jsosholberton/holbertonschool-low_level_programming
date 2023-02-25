#include "main.h"
/**
 * print_square - print # n times in large and weige
 * @n: times to print lxl
 *
 * Return: no data
 */
void print_square(int size)
{
int h, l;
if (size > 0)
{
for (h = 0; h < size; h++)
{
for (l = 0; l < size; l++)
_putchar ('#');
if (h == size -1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}

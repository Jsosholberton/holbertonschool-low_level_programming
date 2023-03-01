#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an array of integers
 * @a: array
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
int c = 0;
for (n--; n >= 0; n--, c++)
{
printf("%d", a[c]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}

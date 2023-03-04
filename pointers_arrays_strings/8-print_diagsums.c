#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - main entry point
 * Description: prints the sum of the two diagonals
 * @a: 2d array of chars
 * @size: number matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int c1, c2;
c1 = 0;
c2 = 0;
i = 0;
while (i < size)
{
c1 = c1 + *(a + i *size + i);
c2 = c2 + *(a + i *size + size - i - 1);
i++;
}
printf("%i, %i\n", c1, c2);
}

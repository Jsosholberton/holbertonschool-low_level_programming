#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print the number ultil 98
 * @n: variable
 *
 */
void print_to_98(int n)
{
if (n > 98)
{
while (n > 98)
printf("%d, ", n--);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}

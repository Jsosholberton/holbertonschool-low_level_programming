#include "main.h"
/**
 *print_alphabet_x10 - abc x 10
 *
 *
 */
void print_alphabet_x10(void)
{
int abc;
int n = 1;
while (n++ <= 10)
{
for (abc = 'a'; abc <= 'z'; abc++)
_putchar(abc);
_putchar('\n');
}
}

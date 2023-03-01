#include "main.h"
/**
 * puts_half - print half of a string
 * @str: is the string
 *
 */
void puts_half(char *str)
{
int c = 0, n, t;
while (str[c] != '\0')
{
c++;
}
t = c % 2;
if (t == 0)
{
n = c / 2;
}
else
{
n = (c) / 2;
}
while (n < c)
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}

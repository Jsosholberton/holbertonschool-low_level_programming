#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: is the string of the data
 *
 * Return: always 0
 */
void puts2(char *str)
{
int b = 0;
while (str[b] != '\0')
{
if (b % 2 == 0)
{
_putchar(str[b]);
}
b++;
}
_putchar('\n');
}

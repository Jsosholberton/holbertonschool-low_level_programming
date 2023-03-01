#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first character.
 * @str: is the string of the data
 *
 * Return: always 0
 */
void puts2(char *str)
{
_putchar(str[0]);
_putchar(str[2]);
_putchar(str[4]);
_putchar(str[6]);
_putchar(str[8]);
_putchar('\n');
}

#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: String to be print
 *
 * Return: always 0
 */
void _puts_recursion(char *s)
{
int c;
for ( c = 0; s[c] != '\0'; c++)
_putchar(s[c]);
_putchar('\n');
}

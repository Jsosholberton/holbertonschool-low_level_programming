#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 *
 * Return: the response
 */
int _strlen_recursion(char *s)
{
int c = 0;
if (*s)
{
c++;
c += _strlen_recursion(s + 1);
}
return (c);
}

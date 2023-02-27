#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: character
 *
 * Return: always 0
 */
int _strlen(char *s)
{
int n = 0;
while (*s++)
n++;
return (n);
}

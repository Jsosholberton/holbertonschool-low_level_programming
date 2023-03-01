#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: the value to intenger
 *
 * Return: string intenger
 */
int _atoi(char *s)
{
float sig = 1, num = 0;
while (*s && (*s < '0' || *s > '9'))
{
if (*s == '-')
sig = -sig;
s++;
}
while (*s && (*s >= '0' && *s <= '9'))
{
num = num * 10 + (*s - '0');
s++;
}
return (num * sig);
}

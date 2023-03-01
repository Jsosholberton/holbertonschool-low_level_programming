#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: the value to intenger
 *
 * Return: string intenger
 */
int _atoi(char *s)
{
int sig = 1, num = 0, resp;
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
resp = (num * sig);
return (resp);
}

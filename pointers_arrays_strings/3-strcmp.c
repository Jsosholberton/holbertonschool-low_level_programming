#include "main.h"
/**
 * _strcmp - return zero if is iqual
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the result of s1 - s2 in ASCII
 */
int _strcmp(char *s1, char *s2)
{
int c = 0, result = 0;
while (*s1++ != '\0' && *s2++ != '\0')
{
result += s1[c] - s2[c];
c++;
}
return (result);
}

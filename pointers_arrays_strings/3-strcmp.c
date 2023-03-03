#include "main.h"
/**
 * _strcmp - return zero if is iqual
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the result of s1 - s2 in ASCII
 */
int _strcmp(char *s1, char *s2)
/*
 *
{
int c = 0, result = 0;
while (s1[c] != '\0' && s2[c] != '\0')
{
result += s1[c] - s2[c];
c++;
}
return (result);
}
*/
{
while (*s1 != '\0' || *s2 != '\0')
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}
return (0);
}

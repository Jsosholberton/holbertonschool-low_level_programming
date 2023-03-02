#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string dest
 * @src: string
 * @n: characters
 * Return: resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *tmp = dest;
while (*dest)
{
dest++;
}
while (*src & n--)
{
*dest++ = *src++;
}
return (tmp);
}

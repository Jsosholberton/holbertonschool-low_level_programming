#include "main.h"
/**
 * _memcpy -copies memory area
 * @dest: destiny
 * @src: source
 * @n: n 
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

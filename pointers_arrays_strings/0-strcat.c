#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string dest
 * @src: string
 *
 * Return: resulting string dest
 */
char *_strcat(char *dest, char *src)
{
while (*dest)
{
dest++;
}
while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
return (dest);
}

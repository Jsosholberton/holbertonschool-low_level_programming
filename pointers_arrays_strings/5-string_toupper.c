#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string to change
 *
 * Return: the result
 */
char *string_toupper(char *str)
{
int c = 0;
while (str[c])
{
if (str[c] >= 97 && str[c] <= 122)
str[c] -= 32;
c++;
}
return (str);
}

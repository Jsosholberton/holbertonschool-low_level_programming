#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
int h;
if (*needle == 0)
return (haystack);
while (*haystack)
{
h = 0;
if (haystack[h] == needle[h])
{
do {
if (needle[h + 1] == '\0')
return (haystack);
h++;
} while (haystack[h] == needle[h]);
}
haystack++;
}
return ('\0');
}

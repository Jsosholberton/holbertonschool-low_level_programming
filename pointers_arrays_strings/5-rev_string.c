#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: character to reverse
 *
 * Return: always 0
 */
void rev_string(char *s)
{
int a, b = 0, c;
char t;
for (a = 0; s[a] != '\0'; a++)
;
c = a / 2;
while (c--)
{
t = s[a - b - 1];
s[a - b - 1] = s[b];
s[b] = t;
b++;
}
}

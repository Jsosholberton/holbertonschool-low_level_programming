#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: is the number of elements of the array
 *
 * Return: the array reverse
 */
void reverse_array(int *a, int n)
{
int tmp, c;
for (c = n - 1; c >= n / 2; c--)
{
tmp = a[n - c - 1];
a[n - c - 1] = a[c];
a[c] = tmp;
}
}
/*
 *
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
*/

#include "main.h"
/**
 *leet - encodes a string into 1337
 *@str - string
 *
 * Return: the string encode
 */
char *leet(char *str)
{
int cod1 = 0, cod2;
char letr[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (str[cod1])
{
for (cod2 = 0; cod2 <= 7; cod2++)
{
if (str[cod1] == letr[cod2] || str[cod1] - 32 == letr[cod2])
str[cod1] = cod2 + '0';
}
cod1++;
}
return (str);
}

/*
{
int c = 0;
while (str[c])
{
if (str[c] == 'a' || str[c] == 'A')
str[c] = '4';
else if (str[c] == 'e' || str[c] == 'E')
str[c] = '3';
else if (str[c] == 'o' || str[c] == 'O')
str[c] = '0';
else if (str[c] == 't' || str[c] == 'T')
str[c] = '7';
else if (str[c] == 'l' || str[c] == 'L')
str[c] = '1';
c++;
}
return(str);
}
*/

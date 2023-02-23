#include "main.h"
/**
 * _isalpha - 1 and 0
 * @c: is a variable
 *
 * Description: if the character is a lleter return 1, else 0
 * header: _isalpha return 1 if is true, 0 if is false
 * Return: return 1 if is true 0 if is false
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

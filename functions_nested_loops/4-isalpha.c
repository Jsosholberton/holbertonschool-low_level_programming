#include "main.h"
/**
 * _isalph - return 1 if is lowercase or uppercase
 * @c: is a variable
 *
 * Return -  1 if is true 0 if is false
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

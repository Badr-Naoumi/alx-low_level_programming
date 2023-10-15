#include <stdio.h>
#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 *
 * @c: digit
 *
 * return: 1 if is it a digit, 0 if not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

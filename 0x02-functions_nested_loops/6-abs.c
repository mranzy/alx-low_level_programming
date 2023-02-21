#include "main.h"

/**
 * _abs - returns the absolute value of integer
 *
 * @a: parameter to be checked
 *
 * Return: a positive integer or zero
 */

int _abs(int a)
{
if (a < 0)
a = -(a);
else if (a >= 0)
a = a;
return (a);
}

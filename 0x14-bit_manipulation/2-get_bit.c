#include "main.h"
/**
 * get_bit - gets bit value at an index
 * @n: integer to get bit value from
 * @index: index of n to get bit from
 *
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
	return (index);
}

#include "main.h"
/**
 * set_bit - sets value of bit to 1 of an index
 * @n: turns a pointer to a number
 * @index: the index of the bit you want
 * Return: 1 or -1 if not true
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setnum = 1;

	setnum <<= index;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	(*n) = (*n) | setnum;
	return (1);
}

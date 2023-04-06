#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 of an index
 * @n: tuens pointer to a number
 * @index: the index of the bit you want
 * Return: 1 or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int somenum = 1;

	somenum <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) & ~(somenum);
	return (1);
}

#include "main.h"
/**
 * get_endianness - get the endiannes
 * Description: get the endiannes of the arch
 * Return: 1 in little Endian - 0 in big Endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}

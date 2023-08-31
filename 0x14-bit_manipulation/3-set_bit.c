#include "main.h"
/**
 * set_bit - sets a specific bit at a particular position
 * @n: the eto the bit being set
 * @index: the position being reffered to
 * Return: 1 if success, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int * 8 - 1))
			return (-1);
			mask <<= index;
			*n = *n | mask;
			return (1);
}

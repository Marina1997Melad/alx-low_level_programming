#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number which contains the bit
 * @index: index at which bit must be found
 * Return: bit (success) or -1 (error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}

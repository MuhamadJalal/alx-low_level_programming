#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: is representation of a number
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int target_bit;

	if (index > 63)
		return (-1);

	target_bit = (n >> index) & 1;
	return (target_bit);
}

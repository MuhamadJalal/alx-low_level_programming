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
	return (index > 63 ? -1 : ((n >> index) & 1));
}

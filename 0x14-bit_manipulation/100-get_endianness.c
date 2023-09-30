#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;

	return (((char *)&i) ? 1 : 0);
}

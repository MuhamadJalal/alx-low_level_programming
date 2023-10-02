#include "main.h"

/**
 *  - .
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;

	return (*((char *)&i));
}

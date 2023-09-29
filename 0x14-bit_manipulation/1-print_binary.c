#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: is representation of a number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int representer;
	int i, current = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 60; i >= 0; i--)
	{
		representer = n >> i;

		if (representer & 1)
		{
			_putchar('1');
			current++;
		}
		else if (current)
			_putchar('0');
	}
	if (!current)
		_putchar('0');
}

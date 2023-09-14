#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
*
* @n: the args count
*
* Return: int
*/


int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(vl, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vl, int);

	return (sum);
}

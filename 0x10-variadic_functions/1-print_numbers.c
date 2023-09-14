#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line
*
* @n: the number of integers passed to the function
* @separator: is the string to be printed between numbers
*
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == (n - 1))
			printf("%d", va_arg(vl, int));
		else
			printf("%d%c", va_arg(vl, int), separator);
	}

	va_end(vl);

	printf("\n");
}

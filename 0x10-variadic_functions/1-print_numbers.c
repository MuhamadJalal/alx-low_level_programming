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

	if (n > 0)
	{
		va_start(vl, n);

		for (i = 1; i < n; i++)
		{
			printf("%d", va_arg(vl, int));

			if (separator != NULL && *separator != 0 && i != (n - 1))
				printf("%s", (char *) separator);
		}

		printf("\n");

		va_end(vl);
	}
}

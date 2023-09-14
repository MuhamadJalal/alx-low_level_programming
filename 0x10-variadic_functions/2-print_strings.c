#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line
*
* @n: the number of strings passed to the function
* @separator: is the string to be printed between numbers
*
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	unsigned char *c;

	if (n > 0)
	{
		va_start(vl, n);

		for (i = 0; i < n; i++)
		{
			c = va_arg(vl, char *);

			if (c == NULL || *c == NULL || *c == '\0')
				printf("%s", "(nil)");
			else
				printf("%s", c);
			if (separator != NULL && *separator != 0 && i != (n - 1))
				printf("%s", separator);
		}

		va_end(vl);
	}
	printf("\n");
}

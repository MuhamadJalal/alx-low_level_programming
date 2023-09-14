#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - prints anything
*
* @format: is a list of types of arguments passed to the function
*
* Return: void
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list vl;

	va_start(vl, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(vl, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(vl, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(vl, double));
					break;
				case 's':
					str = va_arg(vl, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(vl);
}

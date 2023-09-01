#include "main.h"

/**
* _puts - entry point
* the pointer points to string needs to printed
* @str: pointer to the variable to update
*/
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}

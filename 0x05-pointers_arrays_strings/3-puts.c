#include "main.h"

/**
* _puts - entry point
* the pointer points to string needs to printed
* @str: pointer to the variable to update
* Return: void
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	return (i);
}

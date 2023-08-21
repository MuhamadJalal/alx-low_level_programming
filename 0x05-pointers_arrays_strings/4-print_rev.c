#include "main.h"

/**
* print_rev - entry point
* the pointer points to char needs to reversed
* @s: pointer to the variable to reversed
* Return: void
*/
void print_rev(char *s)
{
	int i = 0, l;

	while (s[i] != '\0')
	{
	i++;
	}

	for (l = i - 1; l >= 0; l--)
	{
	_putchar(s[l]);
	}
	_putchar('\n');
}

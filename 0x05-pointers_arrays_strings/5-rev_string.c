#include "main.h"

/**
* rev_string - entry point
* the pointer points to char needs to reversed
* @s: pointer to the variable to reversed
* Return: void
*/
void rev_string(char *s)
{
	int i = 0, l;

	while (s[i] != '\0')
	{
	_putchar(s[i]);
	i++;
	}

	_putchar('\n');

	for (l = i - 1; l >= 0; l--)
	{
	_putchar(s[l]);
	}
	_putchar('\n');
}

#include "main.h"
/**
* rev_string - entry point
* the pointer points to char needs to reversed
* @s: pointer to the variable to reversed
* Return: void
*/
void rev_string(char *s)
{
	int i = 0, l, o;

	for (o = 0; s[o] != '\0'; o++)
	{
		_putchar(s[o]);
	}

	_putchar('\n');

	while (s[i] != '\0')
	{
		++i;
	}

	for (l = i - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}

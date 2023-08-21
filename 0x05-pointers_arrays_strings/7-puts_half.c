#include "main.h"

/**
* puts_half - entry point
* the pointer points to string needs to half printed
* @str: pointer to the variable to update
*/
void puts_half(char *str)
{
	int i = 0;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = (count - 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

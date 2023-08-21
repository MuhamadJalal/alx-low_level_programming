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
	int start_point;

	while (str[count] != '\0')
	{
		count++;
	}

	if ((count % 2) == 0)
	{
		start_point = count / 2;
	}
	else
	{
	  start_point = (count / 2) - 1;
	}

	for (i = start_point; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

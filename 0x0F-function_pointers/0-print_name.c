#include "main.h"

/**
* print_name - prints a name
*
* @name: the name to be printed
* @f: the function pointer
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == '\0')
	{
		f('');

		return;
	}

	f(name);
}

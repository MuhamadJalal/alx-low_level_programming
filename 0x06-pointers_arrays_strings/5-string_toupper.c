#include "main.h"

/**
* string_toupper function that changes all
* lowercase letters of a string to uppercase
*
* @ptr: string to be converted to upper case.
*
* Return: char
*/

char *string_toupper(char *ptr)
{
	int i = 0;
	int desp = 'a' - 'A';

	for (i = 0; ptr[i] != '\0'; ++i)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] = ptr[i] - desp;
		}
	}
}

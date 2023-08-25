#include "main.h"

/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @ptr: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
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

	return (a);
}

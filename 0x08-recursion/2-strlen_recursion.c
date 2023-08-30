#include "main.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: pointer points to string.
*
* Return: int.
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		int len = _strlen_recursion(s + 1) + 1;

		return (len);
	}
	return (0);
}

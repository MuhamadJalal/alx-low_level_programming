#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: the address of text to locates the first occurrence of accept
* @accept: the string to find in
*
* Return: char.
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		i = 0;
		s++;
	}

	return ('\0');
}

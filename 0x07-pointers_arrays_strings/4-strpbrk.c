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
	int j = 0, i = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
			j++;
		}
		i++;
		j = 0;
	}

	return ('\0');
}

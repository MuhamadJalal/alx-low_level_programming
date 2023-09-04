#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);

/**
* str_concat - concatenates two strings
* which contains a copy of the string given as a parameter.
*
* @s1: the first string which will be concatenated.
* @s2: the second string which will be concatenated.
*
* Return: char - pointer to an array
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	ptr = malloc(((size1 + size2) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	_strncat(ptr, s1, size1);
	_strncat(ptr, s2, size2);
	ptr += '\0';
	return (ptr);
}

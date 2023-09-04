#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strncat - concatenate src to dest string.
* @dest: pointer points to the string that will be appended to.
* @src: pointer points to the string needs to add to dest
* @n: the size of src string.
* Return: pointer to char
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, src_len = 0;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;

	for (src_len = 0; src_len < n && src[src_len] != '\0'; src_len++)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
	}
	if (src_len < n)
	{
		dest[dest_len] = '\0';
	}
	return (dest);
}

/**
* _strlen - entry point
* the pointer points to char needs to know its length
* @s: pointer to the variable to update
* Return: int
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

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

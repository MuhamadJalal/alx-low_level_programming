#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings
*
* @s1: the first string to concatenate.
* @s2: the second string to concatenate.
* @n: the size of the allocated memory.
*
* Return: char - pointer to newaly alocated.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	char txt;
	unsigned int size_s1, size_s2;
	unsigned int i, j = 0;

	while (s1 && s1[size_s1] != '\0')
		size_s1++;

	while (s2 && s2[size_s2] != '\0')
		size_s2++;

	if (n < size_s2)
		p = malloc(sizeof(char) * (size_s1 + n + 1));
	else
		p = malloc(sizeof(char) * (size_s1 + size_s2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
		p[i] = s1[i];

	while (n < size_s2 && i < (size_s1 + n))
		p[i++] = s2[j++];

	while (n >= size_s2 && i < (size_s1 + size_s2))
		p[i++] = s2[j++];

	p[i] = '\0';

	return (p);
}

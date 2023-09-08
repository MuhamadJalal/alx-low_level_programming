#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory for an array
*
* @nmemb: array elements.
* @size: the size of the allocated memory.
*
* Return: char - pointer to newaly alocated.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0, full_len = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	full_len = nmemb * size;

	p = malloc(full_len);

	if (p == NULL)
		return (NULL);

	while (i < full_len)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}

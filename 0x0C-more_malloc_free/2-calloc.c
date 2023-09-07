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
	void *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (!p)
		return (NULL);

	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}

	return (p);
}

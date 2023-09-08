#include <stdlib.h>
#include "main.h"

/**
* _realloc - reallocates a memory block using malloc and free
*
* @ptr: lowest value of array.
* @old_size: old size of bytes for ptr.
* @new_size: new size of bytes for ptr.
*
* Return: void - pointer to newaly alocated.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = ptr[i];
		}
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			new_ptr[i] = ptr[i];
		}
	}

	free(ptr);
	return (new_ptr);
}

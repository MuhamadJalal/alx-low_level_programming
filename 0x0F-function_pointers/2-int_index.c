#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - searches for an integer
*
* @array: list of items to excute
* the cmp function pointer on them
* @size: is the size of the array
* @cmp: is a pointer to the function to be used to compare values.
*
* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - executes a function given as
* a parameter on each element of an array
*
* @array: list of itemsto excute
* the action function pointer on them
* @size: is the size of the array
* @action: is a pointer to the function you need to use
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || size < 1)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

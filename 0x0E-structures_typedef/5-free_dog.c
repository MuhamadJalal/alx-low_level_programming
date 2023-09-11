#incude "dog.h"

/**
* free_dog - frees dogs
*
* @d: the pointer struct of type dog
*
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
		return;
	}

	free(d->name);
	free(d.owner);
	free(d);
}

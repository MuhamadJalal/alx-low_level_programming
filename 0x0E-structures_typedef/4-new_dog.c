#incude "dog.h"

/**
* new_dog - creates a new dog
*
* @name: the dog name
* @age: the dog age
* @owner: the dog owner
*
* Return: dog_t the pointer struct of type dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *d;

	d = malloc(sizeof(struct dog_t));

	if (d == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(d);
		free(owner);
		return (NULL);
	}

	if (owner == NULL)
	{
		free(d);
		free(name);
		return (NULL);
	}

	d->name = name;

	d->age = age;

	d->owner = owner;

	return (d);
}

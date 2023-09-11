#include "dog.h"

/**
* print_dog - prints a struct dog
*
* @d: the pointer struct of type dog
*
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: %p", (void *) d->name);
	else
		printf("Name: %s", d->name);

	if (d->age == NULL)
		printf("Age: %p", (void *) d->age);
	else
		printf("age: %d", d->age);

	if (d->owner == NULL)
		printf("Owner: %p", (void *) d->owner);
	else
		printf("Owner: %s", d->owner);
}

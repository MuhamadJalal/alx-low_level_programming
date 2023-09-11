#ifndef DOG_H
#define DOG_H

/**
* struct dog - structered data
*
* @name: the dog name
* @age: the dog age
* @owner: the owner of the dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif

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
};

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

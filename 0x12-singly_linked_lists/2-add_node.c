#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @str: needs to be duplicated
 * @head: a struct input
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_list_t = malloc(sizeof(list_t));

	if (new_list_t != NULL)
		return (NULL);

	while (str[len])
		len++;

	new_list_t->str = strdup(str);
	new_list_t->len = len;
	new_list_t->next = (*head);

	(*head) = new_list_t;

	return (new_list_t);
}

#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list
 * @h: a struct input
 * Return: int.
 */
size_t list_len(const list_t *h)
{
	size_t list_len = 0;

	while (h)
	{
		list_len++;
		h = h->next;
	}

	return (list_len);
}

#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: a struct input
 * Return: int.
 */
size_t print_listint(const listint_t *h)
{
	size_t list_len = 0;

	while (h->n != NULL)
	{
		printf("[%d] %s\n", h->n);
		list_len++;
		h = h->next;
	}

	printf("\n");
	return (list_len);
}

#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: a struct input
 * Return: int.
 */
size_t print_listint(const listint_t *h)
{
	size_t list_len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		list_len++;
	}

	printf("\n");
	return (list_len);
}

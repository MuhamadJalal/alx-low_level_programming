#include <files.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: a struct input
 * Return: int.
 */
size_t print_list(const list_t *h)
{
	int list_len = 0;

	while (h)
	{
		prinf("[%u]", h->len);
		h = h->next;
		list_len++;
	}

	return (list_len);
}

#include <files.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: a struct input
 * Return: int.
 */
size_t print_list(const list_t *h)
{
	size_t list_len = 0;

	while (h)
	{

		if (h->str)
			printf("[%zu] %s\n", list_len, h->str);
		else
			printf("[%zu] (nil)\n", list_len);


		list_len++;
		h = h->next;
	}

	return (list_len);
}

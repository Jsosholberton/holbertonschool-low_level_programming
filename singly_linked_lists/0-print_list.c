#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t list
 *
 * Return: The number of nodes in h
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}

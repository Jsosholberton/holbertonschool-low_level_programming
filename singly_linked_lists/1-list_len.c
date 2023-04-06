#include "lists.h"
/**
 * list_len - return the number of nodes
 * @h: list_t list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

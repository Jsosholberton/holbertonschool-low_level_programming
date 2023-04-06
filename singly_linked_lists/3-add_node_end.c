#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: is a pointer to the head of list_t
 * @str: needs to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len = 0;
	list_t *new_node, *end;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;
	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new_node;
	}
	return (*head);
}

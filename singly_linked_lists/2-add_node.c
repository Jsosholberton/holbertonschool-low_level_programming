#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to head of lists
 * @str: needs to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list
 *
 * @head: pointer to head of the list
 * @str: string to be added in new node
 * Return: pointer to added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (*str++)
		len++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	if (!head)
	{
		new_node->str = strdup(str);
		new_node->len = len;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
		new_node->str = strdup(str);
		new_node->len = len;
	}
	return (new_node);
}

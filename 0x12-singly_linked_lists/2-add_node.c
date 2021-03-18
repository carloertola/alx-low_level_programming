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
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	while (*str++)
		len++;
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

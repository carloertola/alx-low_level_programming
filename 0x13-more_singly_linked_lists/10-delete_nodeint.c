#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 *
 * @head: double pointer to head node
 * @index: index at which to delete node
 * Return: 1 if successfully deleted or -1 if operation fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *current_node = *head, *next_node;
	unsigned int i = 0;

	if (!head)
		return (-1);
	next_node = current_node->next;
	if (index == i && !current_node)
	{
		*head = NULL;
		free(current_node);
		return (1);
	}
	if (index == i && next_node)
	{
		*head = next_node;
		free(current_node);
		return (1);
	}
	while (next_node)
	{
		if (index == i)
		{
			prev_node->next = next_node;
			free(current_node);
			return (1);
		}
		prev_node = current_node;
		current_node = next_node;
		next_node = next_node->next;
		i++;
		if (index == i && !next_node)
		{
			prev_node->next = next_node;
			free(current_node);
			return (1);
		}
	}
	return (-1);
}

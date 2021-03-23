#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: double pointer to head node
 * @idx: index at which to insert new node
 * @n: int data value for new node
 * Return: address of new node or NULL if operation fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *temp, *prev_node;
	unsigned int i = 0;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	temp = *head;
	new_node->n = n;
	if (i == idx)
	{
		new_node->next = temp;
		return (new_node);
	}
	while (temp)
	{
		if (i == idx)
		{
			prev_node->next = new_node;
			new_node->next = temp;
			return (new_node);
		}
		i++;
		prev_node = temp;
		temp = temp->next;
		if (!temp && i == idx)
		{
			prev_node->next = new_node;
			new_node->next = NULL;
			return (new_node);
		}
	}
	return (NULL);
}

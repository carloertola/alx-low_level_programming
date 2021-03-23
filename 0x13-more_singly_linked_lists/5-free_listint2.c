#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list and points head to NULL
 *
 * @head: pointer to head node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
		*head = NULL;
	}
}

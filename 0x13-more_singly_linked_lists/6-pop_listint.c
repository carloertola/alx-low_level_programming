#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n)
 *
 * @head: double pointer to head node
 * Return: data value of head or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	temp = *head;
	if (temp)
	{
		n = temp->n;
		*head = temp->next;
		free(temp);
	}
	return (n);
}

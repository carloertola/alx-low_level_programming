#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 *
 * @head: pointer to head node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = head;
	while (temp)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}

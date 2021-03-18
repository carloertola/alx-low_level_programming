#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to head of a linked list_t list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp, *temp2;

	temp = head;
	while (temp)
	{
		temp2 = temp->next;
		free(temp->str);
		free(temp);
		temp = temp2;
	}
}

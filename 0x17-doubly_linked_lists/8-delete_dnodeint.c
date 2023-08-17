#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at a given index in a linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, or -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur, *previous;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		cur = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}

	previous = *head;
	for (i = 0; i < index - 1; i++)
	{
		previous = previous->next;
		if (previous == NULL)
			return (-1);
	}

	cur = previous->next;
	if (cur == NULL)
		return (-1);

	previous->next = cur->next;
	if (cur->next != NULL)
		cur->next->prev = previous;

	free(cur);
	return (1);
}

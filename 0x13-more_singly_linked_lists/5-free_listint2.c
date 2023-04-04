#include "lists.h"

/**
 * free_listint2 - free the linked list
 * @head: pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *mem;

	if (head == NULL)
		return;
	while (*head)
	{
		mem = *head;
		*head = (*head)->next;
		free(mem);
	}
	head = NULL;
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *mem;
	int m;

	mem = *head;
	if (mem == NULL)
		return (0);
	*head = mem->next;
	m = mem->n;
	free(mem);
	return (m);
}

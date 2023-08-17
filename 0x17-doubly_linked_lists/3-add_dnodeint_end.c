#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at end of dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nodex, *tmp;

	/* Allocate memory for the new node */
	new_nodex = malloc(sizeof(dlistint_t));
	if (new_nodex == NULL)
		return (NULL);

	/* Set the value and pointers of the new node */
	new_nodex->n = n;
	new_nodex->next = NULL;

	/* If the list is empty, update the head pointer */
	if (*head == NULL)
	{
		new_nodex->prev = NULL;
		*head = new_nodex;
		return (new_nodex);
	}

	/* Traverse the list to find the last node */
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	/* Set the pointers to link the new node at the end */
	tmp->next = new_nodex;
	new_nodex->prev = tmp;

	return (new_nodex);
}

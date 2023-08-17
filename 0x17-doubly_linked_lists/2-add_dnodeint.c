#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to head of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodex;

	/* Allocate memory for the new node */
	new_nodex = malloc(sizeof(dlistint_t));
	if (new_nodex == NULL)
		return (NULL);

	/* Set the value and pointers of the new node */
	new_nodex->n = n;
	new_nodex->prev = NULL;
	new_nodex->next = *head;

	/* If the list is not empty, update the previous pointer of the old head */
	if (*head != NULL)
		(*head)->prev = new_nodex;

	/* Update the head pointer to the new node */
	*head = new_nodex;

	return (new_nodex);
}

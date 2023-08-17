#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert new node at a given idx in a linked list
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be inserted.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nodex, *current;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	if (current == NULL)
		return (NULL);

	new_nodex = malloc(sizeof(dlistint_t));
	if (new_nodex == NULL)
		return (NULL);

	new_nodex->n = n;
	new_nodex->prev = current;
	new_nodex->next = current->next;

	if (current->next != NULL)
		current->next->prev = new_nodex;

	current->next = new_nodex;

	return (new_nodex);
}

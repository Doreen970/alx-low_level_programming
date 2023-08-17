#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting from 0.
 *
 * Return: The nth node of the list, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *my_node = head;

	while (my_node != NULL)
	{
		if (counter == index)
			return (my_node);

		counter++;
		my_node = my_node->next;
	}

	return (NULL);
}

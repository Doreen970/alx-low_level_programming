#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer
 * @idx: position to insert
 * @n: element to insert
 * Return: adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *mem, *new_node;
	unsigned int a = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		mem = *head;
		for (; a < idx - 1 && mem != NULL; a++)
			mem = mem->next;
		if (mem == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = mem->next;
	mem->next = new_node;
	return (new_node);
}

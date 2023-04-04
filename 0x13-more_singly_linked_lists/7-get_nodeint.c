#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the linked list
 * @index: index of node starting at 0
 * Return: A pointer to the nth element if it exits
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *mem;
	unsigned int a = 0;

	mem = head;
	while (mem != NULL && (a< index))
	{
		mem = mem->next;
		a++;
	}
	return (mem);
}

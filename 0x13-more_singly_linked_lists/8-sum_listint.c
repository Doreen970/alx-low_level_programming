#include "lists.h"

/**
 * sum_listint - sums up all the data (n) of a listint_t linked list
 * @head: pointer to the first element
 * Return: sum of all data (n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	listint_t *mem;
	int sum = 0;

	mem = head;
	if (mem == NULL)
		return (0);
	while (mem != NULL)
	{
		sum += mem->n;
		mem = mem->next;
	}
	return (sum);
}

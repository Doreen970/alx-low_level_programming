#include "lists.h"

/**
 * listint_len -counts number of elements in a linked listint_t
 * @h: List to check
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_elements = 0;
	const listint_t *a = h;

	while (a != NULL)
	{
		number_of_elements++;
		a = a->next;
	}
	return (number_of_elements);
}

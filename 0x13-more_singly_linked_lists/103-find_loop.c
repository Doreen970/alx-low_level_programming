#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *e, *f;

	e = f = head;

	while (e && f && f->next)
	{
		e = e->next;
		f = f->next->next;
		if (e == f)
		{
			e = head;
			break;
		}
	}

	if (!e || !f || !f->next)
		return (NULL);
	while (e != f)
	{
		e = e->next;
		f = f->next;
	}
	return (f);
}

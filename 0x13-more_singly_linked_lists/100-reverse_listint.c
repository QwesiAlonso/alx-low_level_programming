#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @h: a pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*h)
	{
		next = (*h)->next;
		(*h)->next = prev;
		prev = *h;
		*h = next;
	}

	*h = prev;

	return (*h);
}

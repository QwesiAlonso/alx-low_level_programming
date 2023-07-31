#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @h: pointer to the first node in the list
 * @i: index where the new node is added
 * @j: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int i, int j)
{
	unsigned int n;
	listint_t *new;
	listint_t *temp = *h;

	new = malloc(sizeof(listint_t));
	if (!new || !h)
		return (NULL);

	new->n = j;
	new->next = NULL;

	if (i == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}

	for (n = 0; temp && n < i; n++)
	{
		if (n == i - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

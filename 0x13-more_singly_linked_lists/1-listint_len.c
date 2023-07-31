#include "lists.h"

/**
 * listint_len - it returns the number of elements in a linked lists
 * @i: linked list of type listint_t to traverse
 *
 * Return: number the of nodes
 */
size_t listint_len(const listint_t *i)
{
	size_t num = 0;

	while (i)
	{
		num++;
		i = i->next;
	}

	return (num);
}

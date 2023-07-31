#include "lists.h"

/**
 * print_listint - it prints all the elements of linked list
 * @i: linked list of all types of listint_t to print
 *
 * Return: number the of nodes
 */
size_t print_listint(const listint_t *i)
{
	size_t num = 0;

	while (i)
	{
		printf("%d\n", i->n);
		num++;
		i = i->next;
	}

	return (num);
}

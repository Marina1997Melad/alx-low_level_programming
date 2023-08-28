#include "lists.h"
/**
 * print_listint - print list of elements
 * @h: the start of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}

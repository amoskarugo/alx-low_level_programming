
#include "lists.h"
/**
 * print_listint - it prints all the items in the linked list
 * @h: it is a pointer to the head node
 * Return: number of present nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}

	return (count);
}


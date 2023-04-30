#include "lists.h"

/**
 * listint_len - counts the number of items in the list
 *
 * @h: pointer to head of the list
 * Return: exact number of items in the linked list
 *
 */




size_t listint_len(const listint_t *h)
{
	int items = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->n != '\0')
			items++;
	}

	return (items);
}

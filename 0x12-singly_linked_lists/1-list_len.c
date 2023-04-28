#include "lists.h"

/**
 * list_len - exact number of elements in a linked list
 *
 * @h: pointer to node
 *
 * Return: numb of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int j;

	temp = h;
	for (j = 0; tmp; j++)
		temp = temp->next;
	return (j);
}

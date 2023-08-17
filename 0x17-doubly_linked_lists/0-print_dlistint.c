#include "lists.h"

/**
 *print_dlistint - print all elements in a doubly linked list
 *@h: pointer to head node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}

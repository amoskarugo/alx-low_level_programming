#include "lists.h"
/**
 * free_listint2 - frees the linked list and resets the head.
 * @head: pointer to a pointer to the head.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *in, *makeshift;

	if (head == NULL)
		return;

	makeshift = *head;
	while (in != NULL)
	{
		makeshift = in;
		in = in->next;
		free(makeshift);
	}

	*head = NULL;
}

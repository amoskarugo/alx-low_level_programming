#include "lists.h"

/**
 * get_nodeint_at_index - get node at nth index
 *
 * @head: head node pointer
 * @index: nodes to iterate
 *
 * Return: node at nth index/ NULL if no such node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;


	for (j = 0; j < index && head != NULL; j++)
		head = head->next;

	if (j < index)
		return (NULL);

	return (head);
}

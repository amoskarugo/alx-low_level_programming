#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: a pointer to the head node
 *
 * Return: the first node
 * else NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *previous = NULL;

	if (!head)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;
	return (*head);
}

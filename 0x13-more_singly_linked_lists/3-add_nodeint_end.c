#include "lists.h"

/**
 * add_nodeint_end - inserts a node at the end of the list
 * @head: pointer to a pointer to the head
 * @n: integer value for the new node
 * Return: a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_new = malloc(sizeof(listint_t));

	if (_new == NULL)
		return (NULL);

	_new->n = n;
	_new->next = NULL;
	if (*head != NULL)
	{
	listint_t *makeshift = *head;
		while (makeshift->next != NULL)
			makeshift = makeshift->next;
		makeshift->next = _new;
	}

	else
		*head = _new;

	return (_new);
}

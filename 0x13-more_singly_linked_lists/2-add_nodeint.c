#include "lists.h"

/**
 * add_nodeint - inserts a new node at the start
 * @head: pointer to a pointer of the head node
 * @n: value to be added in the newly inserted node
 * Return: the address of the inserted node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_new = malloc(sizeof(listint_t));

	if (add_new == NULL)
		return (NULL);

	add_new->n = n;

	add_new->next = *head;
	*head = add_new;

	return (add_new);
}

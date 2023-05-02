#include "lists.h"

/**
 * find_listint_loop - find the first node in the loop
 * @head: pointer to the head node
 *
 * Return: pointer to the head node of the loop else NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n1 = head, *n2 = head;

	if (!head || !head->next)
		return (NULL);

	do
		n1 = n1->next, n2 = n2->next->next;
	while (n2 && n2->next && n1 != n2);

	if (n1 == n2 && n1)
	{
		n1 = head;


		if (n1 == n2)
			while (n2->next != n1)
				n2 = n2->next;
		else
			while (n1->next != n2->next)
			{
				n1 = n1->next;
				n2 = n2->next;
			}
		return (n2->next);
	}

	return (NULL);
}

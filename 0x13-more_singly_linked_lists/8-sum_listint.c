#include "lists.h"

/**
 * sum_listint - sums all the data in a list
 *
 * @head: head node pointer
 *
 * Return: sum 
*/
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return 0;
	else
		return head->n + sum_listint(head->next);
}


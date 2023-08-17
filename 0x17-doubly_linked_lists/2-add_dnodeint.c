#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add at the beggining
 *@n: data to insert into newnode
 *@head: head pointer
 * Return: address of the added node
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t  *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;

	}

	return (newnode);

}

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
	dlistint_t  *newnode, *h;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	h = *head;

	if (h == NULL)
	{
		h = newnode;
	}
	else
	{
		h->prev = newnode;
		newnode->next = h;
		h = newnode;

	}

	return (newnode);

}

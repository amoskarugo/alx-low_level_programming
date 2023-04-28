
#include "lists.h"

/**
 * strlength - determines the length of a string
 * @s: string to get length
 *
 * Return: the length of the string
 */
int strlength(const char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;
	return (j);
}

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to the head node
 * @str: string to be used as content of the newly added node
 *
 * Return: address of the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_new;
	list_t *focus = *head;

	_new = malloc(sizeof(list_t));
	if (_new != NULL)
	{
		_new->str = strdup(str);
		_new->len = strlength(str);
		_new->next = NULL;
	}
	else
		return (NULL);
	if (focus != NULL)
	{
		while (focus->next != NULL)
			focus = focus->next;
		focus->next = _new;
	}
	else
		*head = _new;
	return (_new);
}



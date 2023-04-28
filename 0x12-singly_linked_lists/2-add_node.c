#include "lists.h"

/**
 * strlength - determine the length of a string
 * @s: string
 *
 * Return: len of the str
 */
int strlength(const char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;
	return (j);
}
/**
 * add_node - adds a node at the start of a linked list
 * @head: pointer to the head node
 * @str: string used as the data of the list
 *
 * Return: address of the newly created node
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *_new;

	_new = malloc(sizeof(list_t));
	if (_new != NULL)
	{
		_new->str = strdup(str);
		_new->len = strlength(str);
		_new->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		_new->next = *head;
	*head = _new;
	return (_new);
}





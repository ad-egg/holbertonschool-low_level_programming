#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * list_t - adds a new node at the beginning of a list_t list
 * @head: pointer to list_t list
 * @str: node to be added
 * Return: address of new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int i, len;
	char *dup;

	if ((head == NULL) || (str == NULL))
		return (NULL);
	len = _strlen(str);
	ptr = *head;
	dup = malloc (sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(dup);
		return (NULL);
	}
	ptr->str = dup;
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

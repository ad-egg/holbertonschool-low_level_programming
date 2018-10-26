#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - allocates memory containing a copy of string given as parameter
 * @str: a copy of this string will be in allocated memory space
 * Return: pointer to newlly alocated space in memory
 */

char *_strdup(const char *str)
{
	char *pt;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	pt = malloc(len * sizeof(char) + 1);
	if (pt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
		pt[i] = str[i];
	pt[i] = '\0';
	return (pt);
}

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
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to list_t list
 * @str: node to be appended to list_t list
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *appended;
	list_t *current;

	if ((head == NULL) || (str == NULL))
		return (NULL);
	current = *head;
	appended = malloc (sizeof(list_t));
	if (appended == NULL)
		return (NULL);
	appended->str = _strdup(str);
	appended->len = _strlen(str);
	appended->next = NULL;
	if (current == NULL)
		*head = appended;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = appended;
	}
	return (appended);
}

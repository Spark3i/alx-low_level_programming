#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *add_node- add new node to the beginning of a list
  *@head: beginning of list
  *@str: characters to be added
  *Return: the new node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->str = strdup(str);
		newnode->len = len;
		newnode->next = (*head);
		(*head) = newnode;
	}
	return (newnode);
}

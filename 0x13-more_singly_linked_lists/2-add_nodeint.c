#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *add_nodeint- add new node to the beginning of a list
  *@head: beginning of list
  *@n: data  to be added
  *Return: the new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = (*head);
		(*head) = newnode;
	}
	return (newnode);
}

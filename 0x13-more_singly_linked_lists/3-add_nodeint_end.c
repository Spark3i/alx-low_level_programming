#include "lists.h"
#include <stdio.h>
/**
  *add_nodeint_end- adds new node to the end of a list
  *@head: list to add to
  *@n: pointer to the new node
  *Return: address of new node otherwise null
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newnode;
	return (newnode);
}


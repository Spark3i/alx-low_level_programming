#include "lists.h"
/**
  *pop_listint- deletes the head node of a list
  *@head: pointer to the head of the linked list
  *Return: data of head node else 0
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (head == NULL || *head == NULL)
		return (0);

	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (count);
}

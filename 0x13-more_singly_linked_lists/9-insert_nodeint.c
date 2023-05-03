#include "lists.h"
/**
  *insert_nodeint_at_index- inserts newnode at a given position
 *@head: pointer to the linked lists
 *@idx: index of the list where the newnode will be added
  *@n: element of the new node
  *Return: address of the new node otherwise NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL || head == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i ==idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}


#include "lists.h"
/**
  *delete_nodeint_at_index- deletes node at index
  *@head: pointer to the linked lists
  *@index: point to delete from
  *Return: 1 when succesful otherwise -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *idx = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	idx = temp->next;
	temp->next = idx->next;
	free(idx);
	return (1);
}

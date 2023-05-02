#include "lists.h"
/**
  *get_nodeint_at_index- returns the nth number of linked files
  *@head: pointer to the linked files
  *@index: index of the node starting at zero
  *Return:pointer to the nth node else zero
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}

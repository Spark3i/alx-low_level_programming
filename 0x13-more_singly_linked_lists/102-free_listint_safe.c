#include "lists.h"
/**
  *free_listint_safe- frees a listint list
  *@h: pointer to the first node in the list
  *Return: size of list that was freed
  */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;
	int dif;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}

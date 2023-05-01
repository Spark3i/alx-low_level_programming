#include "lists.h"
#include <stdio.h>
/**
  *listint_len- return the number of elements in alist
  *@h: pointer to the elements in the list
  *Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

#include "lists.h"
#include <stdio.h>

/**
  *list_len- returns the number of elements in a lonked list
  *@h: pointer to the code
  *Return: number of element
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

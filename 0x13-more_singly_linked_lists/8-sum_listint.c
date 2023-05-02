#include "lists.h"
/**
  *sum_listint- sums all the data linked
  *@head: pointer to the link
  *Return: sum else 0
  */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}

#include "lists.h"

/**
 * sum_listint - get the sum of all the int `n` of a `listint_t` linked list
 * @head: pointer to head
 * Return: sum of all int `n`
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
		sum += temp->n;

	return (sum);
}

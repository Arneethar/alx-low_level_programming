#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a `listint_t` list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: Address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (head == NULL)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		temp = *head;
	}
	else
	{
		temp = *head;
		new->next = temp;
		new->n = n;
		*head = new;
		temp = new;
	}
	return (new);
}

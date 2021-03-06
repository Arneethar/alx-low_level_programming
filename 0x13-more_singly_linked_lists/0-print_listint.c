#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all elements of a `listint_t` list
 * @h: linked list head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t n = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
			temp = temp->next;
		n++;
	}

	return (n);
}

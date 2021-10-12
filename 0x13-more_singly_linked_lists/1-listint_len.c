#include <stdio.h>
#include "lists.h"
/**
 * listint_len - print all elements of a `listint_t` list
 * @h: linked list head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t n = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}

	return (n);
}

#include "lists.h"

/**
 * print_dlistint - function to print the list
 * @h: pointer to the head
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}

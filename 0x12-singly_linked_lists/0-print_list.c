#include <stdio.h>
#include "lists.h"
/**
 * list_t - function that print all the element in list
 * @h: pointer to the list
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return(n);
}

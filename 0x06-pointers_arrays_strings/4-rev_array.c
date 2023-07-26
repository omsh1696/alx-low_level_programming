#include "main.h"
/**
 * reverse_array - function that reverse the content
 *
 * @a: input array
 * @n: number of element of the array
 *
 * Return:
 */
void reverse_array(int *a, int n)
{
	int i, b, c;

	for (i = 0, b = (n - 1); i < b; i++, b++)
	{
		c = a[i];
		a[i] = a[b];
		a[b] = c;
	}
}

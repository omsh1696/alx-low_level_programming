#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints an array
 * @array: array
 * @size: size of array
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}

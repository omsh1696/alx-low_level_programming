#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: int input
 * @b: int input
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}

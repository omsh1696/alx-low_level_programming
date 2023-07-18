#include "main.h"
/**
 * _abs - function that git the absolute value of a number
 *
 * @n: take integer input for the function
 *
 * Return: always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

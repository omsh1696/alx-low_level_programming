#include "main.h"
/**
 * _isdigit - check if the input is digit in renag (0-9)
 *
 * @c: input type
 *
 * Return: 1 if digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

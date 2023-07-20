#include "main.h"
/**
 * _isupper - check if c is upper
 *
 * @c: input type
 *
 * Return: 1 if upper and 0 if lower
 */
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

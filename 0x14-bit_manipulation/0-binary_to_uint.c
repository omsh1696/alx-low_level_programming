#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string input
 *
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		value = value * 2 + (b[i] - '0');
	}
	return (value);
}

#include "main.h"
/**
 * print_rev - print the string in reverse
 *
 * @s: pointer to the string to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

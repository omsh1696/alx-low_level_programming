#include "main.h"
/**
 * print_line - print straight line
 *
 * @n: input number that define the lenght of the line
 *
 * Return: always 0
 */
void print_line(int n)
{
	int ln;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
			_putchar('_');
		_putchar('\n');
	}
}

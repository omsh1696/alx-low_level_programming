#include "main.h"
/**
 * print_diagonal - print a diagonal line
 *
 * @n: input
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x, space;

	if (n <= 10)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (space = 1; space <= x; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}


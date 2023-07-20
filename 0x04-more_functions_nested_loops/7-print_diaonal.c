#include "main.h"
/**
 * print_diagonal - print \ after spaces
 *
 * @n: input number that define the lenght of the line
 *
 * Return: always 0
 */
void print_diagonal(int n)
{
	int ln, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
		{
			for (space = 1; space <= ln; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

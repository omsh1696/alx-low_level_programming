#include "main.h"
/**
 * print_square - print square using #
 *
 * @size: size of the square
 *
 * Return: always 0
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
				_putchar(35);
			_putchar('\n');
		}
}

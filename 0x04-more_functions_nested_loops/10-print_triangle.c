#include "main.h"
/**
 * print_triangle - print triangle using # char
 *
 * @size : triangle size
 *
 * Return: always 0
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if ((x + y) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}

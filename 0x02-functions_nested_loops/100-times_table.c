#include "main.h"
/**
 * print_times_table - prints time table of n less than or equal 15
 *
 * @n: input integer number
 */

void print_times_table(int n)
{
	int row, clm, prod;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar(48);
			for (clm = 1; clm <= n; clm++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * clm;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

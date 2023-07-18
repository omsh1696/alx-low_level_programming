#include "main.h"
/**
 * times_table - print te 9 time table
 */
void times_table(void)
{
	int row, clm, prod;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48);
		for (clm = 1; clm <= 9; clm++)
		{
			_putchar(',');
			_putchar(' ');
			prod = row * clm;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);

		}
		_putchar('\n');
	}
}

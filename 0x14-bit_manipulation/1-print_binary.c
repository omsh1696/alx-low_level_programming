#include "main.h"

/**
 * print_binary - prints the binary number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, print = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}

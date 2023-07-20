#include "main.h"
/**
 * print_numbers - print from 0 to 9 using _putchar function
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int num = 0;

	while (num >= 0 && num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}

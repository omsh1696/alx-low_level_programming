#include "main.h"

/**
 * print_alphabet_x10- function that print the a -z 10 times
 */

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; ch <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}

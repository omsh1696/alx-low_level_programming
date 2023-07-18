#include "main.h"

/**
 * print_alphabet - utilizes on th _putchar funtion to printthe alphabet a -z
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	putchar('\n');

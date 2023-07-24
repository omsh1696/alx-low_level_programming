#include "main.h"
/**
 * puts2 - print string
 *
 * @str: string input
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(st[i]);
	}
	_putchar('\n');
}

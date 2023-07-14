#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing the lowercase alphabe
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

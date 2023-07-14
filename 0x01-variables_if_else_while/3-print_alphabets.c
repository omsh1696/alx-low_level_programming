#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing the lowercase alphabet and the uppercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch1 = 'a';
	char ch2 = 'A';

	while (ch1 <= 'z')
	{
		putchar(ch1);
		ch1++;
	}
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}

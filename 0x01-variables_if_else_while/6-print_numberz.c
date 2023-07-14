#include <stdio.h>

/**
 * main - entru point
 *
 * discription: print all single digit number
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}

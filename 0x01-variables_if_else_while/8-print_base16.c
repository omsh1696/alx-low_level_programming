#include <stdio.h>

/**
 * main - entry point
 *
 * description: print all the number of base 16 in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		putchar(num);
		if (num == 57)
			num += 39;
		num++;
	}
	putchar('\n');
	return (0);
}

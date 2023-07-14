#include <stdio.h>

/**
 * main -entry point
 *
 * description: print all single digit number
 *
 * Return: always 0 (success0
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}

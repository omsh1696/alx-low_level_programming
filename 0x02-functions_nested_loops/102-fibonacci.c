#include <stdio.h>
/**
 * main - entry point
 *
 * description: write the fibonacci number staring with 1 and 2
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int fibo;

	printf("%d\n%d\n", num1, num2);
	for (int i = 3; i <= 50; i++)
	{
		fibo = num1 + num2;
		printf("%d, ", fibo);
		num1 = num2;
		num2 = fibo;
	}
	return (0);
}

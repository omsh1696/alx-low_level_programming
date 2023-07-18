#include "main.h"
/**
 * main - entry point
 *
 * description: write the fibonacci number staring with 1 and 2
 *
 * Return: always 0 (success)
 */
int main(void)
{
	float count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			count += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", count);
	return (0);
}

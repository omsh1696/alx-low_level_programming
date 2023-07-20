#include <stdio.h>
/**
 * _sqroot - find the square root
 *
 * @z: input number
 *
 * Return: square root of x
 */
double _sqroot(double z)
{
	float x, y;

	x = z / 2;
	y = 0;

	while (x != y)
	{
		y = x;
		x = (z / y + y) / 2;
	}
	return (x);
}
/**
 * largest_prime_factor - find and print the largest prime factor of num
 *
 * @num: input number
 *
 * Return: largest
 */
void largest_prime_factor(long int num)
{
	int i, largest;

	while (num % 2 == 0)
		num = num / 2;
	for (i = 3; i <= _sqroot(num); i += 2)
	{
		while (num % i == 0)
		{
			num = num / i;
			largest = i;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}
/**
 * main- entry point
 *
 * Return: always 0
 */
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

#include "main.h"
/***/
long int LPF(long int num)
{
	long largest = 0;
	long int i;

	while (num % 2 ==0)
	{
		largest = 2;
		num /= 2;
	}
	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest = i;
			num /= i;
		}
	}
	if ( num > 2)
	{
		largest = num;
	}
	return (largest);
}
int main(void)
{
	long int number = 612852475143;
	long int result = LPF(number);

	printf ("%ld\n", result);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplies of two number
 * @argc: int
 * @argv: value
 * Return: 0 (success), non-zero-fail
 */
int main(int argc, char **argv)
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n")
		return (1);
	}
	return (0);
}

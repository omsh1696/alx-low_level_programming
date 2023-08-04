#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds postive number
 * @argc: int
 * @argv: value
 * Return: 0 (success) , non-zero-fail
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);

}

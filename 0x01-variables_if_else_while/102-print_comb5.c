#include <stdio.h>

/**
 * main - entry point
 *
 * description: print all possible combination of two two-digit numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int firstnum = 0, secnum;

	while (firstnum <= 99)
	{
		secnum = firstnum;
		while (secnum <= 99)
		{
			if (secnum != firstnum)
			{
				putchar((firstnum / 10) + 48);
				putchar((firstnum % 10) + 48);
				putchar(' ');
				putchar((secnum / 10) + 48);
				putchar((secnum % 10) + 48);

				if (firstnum != 98 || secnum != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secnum++;
		}
		firstnum++;
	}
	putchar('\n');
	return (0);
}

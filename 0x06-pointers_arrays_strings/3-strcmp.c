#include "main.h"
/**
 * _strcmp - function thar compare two string
 *
 * @s1: input string
 * @s2: input string
 *
 * Return:1 if ture 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			a = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (a);
}

#included "main.h"
/**
 * _strlen - the length of string
 *
 * @s: string input
 *
 * Return: i the lenght of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;

	return (i)
}

#include "main.h"
/**
 * _strlen - fun that is len of str
 *
 * @s: is a ASCII char
 *
 * Return: len of a str
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include "main.h"
#include <unistd.h>

/**
 * _printfs - func that prints to stout
 *
 * @c: parameter
 * Return: stout of args
 */
int _printfs(char *c)
{
	int i = 0;

	if (c == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		while (c[i] != '\0')
			i++;
		_printfchar(c[i]);
	}
	return (i);
}

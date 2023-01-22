#include "main.h"
#include <unistd.h>

/**
 * _printfs - func that prints to stout
 *
 * @c: parameter
 * Return: stout of args
 */
void _printfs(char *c)
{
	int i;

	if (c == NULL)
		return;
	for (i = 0; c[i] != '\0'; i++)
		_printfchar(c[i]);
}

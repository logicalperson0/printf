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

	if (c == NULL)
		return;
	while (*c)
		_printfchar(*c++);
}

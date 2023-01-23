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
		return (-1);
	while (c[i] != '\0')
		i++;
	return (write(1, c, i));
}

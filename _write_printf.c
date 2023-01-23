#include "main.h"
#include <unistd.h>

/**
 * _printfs - func that prints to stout
 *
 * @c: parameter
 * Return: stout of args
 */
int _printfs(va_list str)
{
	int i = 0;
	char *s;

	s = va_arg(str, char *);
	if (s == NULL)
	{
		return (-1);	
	}
	else
	{
		while (s[i] != '\0')
		{
			_printfchar(s[i]);
			i++;
		}
	}
	return (i);
}

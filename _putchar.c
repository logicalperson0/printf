#include <unistd.h>
#include <stdarg.h>

/**
 * _printfchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printfchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * printingc - func that prints char
 * @chars: parameter
 *
 * Return: 1
 */
int printingc(va_list chars)
{
	_printfchar(va_arg(chars, int));
	return (1);
}

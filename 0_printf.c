#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - func that prints c & s format
 * @format: parameter
 * Return: print char or str
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	char *k;
	va_list args;
	char f;

	va_start(args, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					f = (char)va_arg(args, int);
					if (!f)
						break;
					_printfchar(f), count++;
					break;
				case 's':
					k = va_arg(args, char *);
					if (!k)
						break;
					_printfs(k), count += _strlen(k);
					break;
				case '%':
					_printfchar('%'), count++;
					break;
				default:
					return (-1);
			}
		}
		else
			_printfchar(format[i]), count++;
	}

	va_end(args);

	return (count);
}

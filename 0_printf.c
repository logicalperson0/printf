#include <limits.h>
#include "main.h"
/**
 * _printf - func that prints c & s format
 * @format: parameter
 * Return: print char or str
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	char *k;
	va_list args;
	char f;

	va_start(args, format);
	if (format == NULL || (format[i] == '%' && !format[i + 1]))
		return (-1);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_printfchar(format[i]), count++;
		else
		{
			i++;
			switch (format[i])
			{
				case 'c':
					f = va_arg(args, int);
					_printfchar(f), count++;
					break;
				case 's':
					k = va_arg(args, char *);
					_printfs(k), count += _strlen(k);
					break;
				case '%':
					_printfchar('%'), count++;
					break;
				default:
					break;
			}
		}
	}
	va_end(args);
	return (count);
}

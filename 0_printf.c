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
	if (!format[i])
		return (0);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_printfchar(format[i]), count++;
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			switch (format[i])
			{
				case 'c':
					f = va_arg(args, int);
					if (!f)
						return (-1);
					_printfchar(f), count++;
					break;
				case 's':
					k = va_arg(args, char *);
					if (!k)
						return (-1);
					_printfs(k), count += _strlen(k);
					break;
				case '%':
					_printfchar('%'), count++;
					break;
				default:
					return (-1);
			}
		}
	}
	va_end(args);
	return (count);
}

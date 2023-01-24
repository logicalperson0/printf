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
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_printfchar(format[i]), count++;
		else
		{
			if (format[i + 1] == '\0')
				return (-1);
			else if (format[i + 1] == '%')
				_printfchar('%'), count++, i++;

			else if (compare_f(format[i + 1]) != NULL)
				count += (compare_f(format[i + 1]))(args), i++;

			else
			{
				_printfchar(format[i]);
				count++;
			}
		}
	}
	va_end(args);
	return (count);
}

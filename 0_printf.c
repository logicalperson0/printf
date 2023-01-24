#include <limits.h>
#include "main.h"
/**
 * _printf - func that prints c,s,d,i specifiers
 * @format: parameter
 * Return: print char or str
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list args;
	const char *v = format;

	if (!v)
		return (-1);
	va_start(args, format);
	for (i = 0; v[i] != '\0'; i++)
	{
		if (v[i] != '%')
			_printfchar(v[i]), count++;
		else
		
		{
			if (v[i + 1] == '\0')
				return (-1);
			else if (v[i + 1] == '%')
				_printfchar('%'), count++, i++;

			else if (compare_f(v[i + 1]) != NULL)
				count += (compare_f(v[i + 1]))(args), i++;

			else
			{
				_printfchar(v[i]);
				count++;
			}
		}
	}
	va_end(args);
	return (count);
}

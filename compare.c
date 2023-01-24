#include "main.h"

/**
 * compare_f - matching specifier with func
 * @c: char
 * Return: 0
 */
int (*compare_f(const char c))(va_list)
{
	printing printff[] = {
		{'c', printingc},
		{'s', _printfs},
		{'d', write_int},
		{'i', write_int},
		{'b', binary_p},
		{'\0', NULL}
	};

	int i;

	for (i = 0; printff[i].k != '\0'; i++)
	
	{
		if (printff[i].k == c)
			return (printff[i].fptr);
	}
	return (0);
}

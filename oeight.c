#include "main.h"

/**
 * o_eight - func that prints in base 8
 *
 * @oeights: parameter
 *
 * Return: num of prints in base 8
 */
int o_eight(va_list oeights)
{
	unsigned int input;
	int a, b, c = 0;

	input = va_arg(oeights, int);

	if (input == 0)
	{
		_printfchar(48);
		c++;
	}
	if (input > 0 && input <= 8)
	{
		_printfchar(input + 48);
		c++;
	}
	if (input > 8)
	{
		b = 8;
		while ((input / b) > 8)
			b *= 8;

		while (b > 0)
		{
			a = input / b;
			_printfchar(a + 48);
			c++;

			input = input % b;
			b = b / 8;
		}
	}
	return (c);
}

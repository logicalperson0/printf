#include "main.h"

/**
 * u_ints - func that prints unsigned int
 *
 * @uints: parameter
 * Return: no of uints printed
 */
int u_ints(va_list uints)
{
	unsigned int input;
	int x, y, z = 0;

	input = va_arg(uints, int);

	if (input == 0)
	{
		_printfchar(48);
		z++;
	}

	if (input > 0 && input <= 9)
	{
		_printfchar(input + 48);
		z++;
	}
	if (input > 9)
	{
		x = 10;
		while ((input / x) > 9)
			x *= 10;
	
		while (x > 0)
		{
			y = input / x;
			_printfchar(y + 48);
			z++;

			input = input % x;
			x = x / 10;
		}
	}
	return (z);
}

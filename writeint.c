#include "main.h"

/**
 * write_int - prints an int
 * @args: input va_list
 * Return: no of char printed
 */
int write_int(va_list args)
{
	long int input;

	int c, a, b;

	c = 0;
	input = va_arg(args, int);

	if (input < 0)
	{
		input *= -1;
		_printfchar(45);
		c++;
	}
	if 
	(input >= 0 && input <= 9)
	{
		_printfchar(input + 48);
		c++;
	}
	if (input > 9)

	{
		b = 10;
		while (input / b > 9)
			b *= 10;
		while (b > 0)
		{
			a = input / b;
			_printfchar(a + 48);

			input = input % b;
			b = b / 10;
			c++;
		}
	}
	return (c);
}

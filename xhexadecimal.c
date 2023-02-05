#include "main.h"

/**
 * x_hexadec - prints in hexadecimal
 *
 * @hexa: parameter
 *
 * Return: num of printed hexadecimal
 */
int x_hexadec(va_list hexa)
{
	unsigned int input;
	int x, y, z = 0;

	input = va_arg(hexa, unsigned int);

	if (input == 0)
		z += printhexa(input);

	if (input > 0 && input <= 9)
		z += printhexa(input);

	if (input > 9 && input <= 15)
		z += printhexa(input);

	if (input > 15)
	{
		y = 16;
		while ((input / y) > 15)
			y *= 16;
		while (y > 0)
		{
			x = input / y;
			z += printhexa(x);

			input = input % y;
			y = y / 16;
		}
	}
	return (z);
}
/**
 * printhexa - prints from 10-15 the alphabet for the hexadecimal
 * @a: parameter
 * Return: the alphabet for hexadec
 */
int printhexa(int a)
{
	int i = 0, d = 0;
	int mapto[] = {97, 98, 99, 100, 101, 102};
	int mapfrom[] = {10, 11, 12, 13, 14, 15};

	if (a == 0)
	{
		_printfchar(48);
		d++;
	}

	if (a > 0 && a <= 9)
	{
		_printfchar(a + 48);
		d++;
	}

	if (a > 9 && a <= 15)
	{
		while (i <= 5)
		{
			if (a == mapfrom[i])
			{
				_printfchar(mapto[i]);
				d++;
				break;
			}
			i++;
		}
	}
	return (d);
}

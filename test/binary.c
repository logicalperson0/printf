#include "main.h"

/**binary_p - func that prints binary of int
 *
 * @ints: parameter of va_list
 *
 * Return: count of printed int
 */
int binary_p(va_list ints)
{
	unsigned int c, d, i, count = 0;

	input = va_arg(ints, int);

	if (input < 0)
	{
		return (-1);
	}
	else if (input == 0)
	{
		_printfchar(input + 48);
	}
	else
	{
		for (i = 0; input > 0; i++)
		{
			c = input / 2;
			d = input % 2;

			_printfchar(d + 48), count++;
			input = c;
		}
	}
	return (count);
}


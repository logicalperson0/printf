#include "main.h"

/**binary_p - func that prints binary of int
 *
 * @ints: parameter of va_list
 *
 * Return: count of printed int
 */
int binary_p(va_list ints)
{
	unsigned int c, i, count = 0, input, j;
	unsigned int *d;

	d = malloc(sizeof *d);

	input = va_arg(ints, int);

	if (input == 0)
	{
		_printfchar(input + 48), count++;
	}
	else if (input == 1)
		_printfchar(input + 48), count++;
	else
	{
		for (i = 0; input > 0; i++)
		{
			c = input / 2;
			j = input % 2;
			d[i] = j;
			input = c;
		}
		while (i > 0)
			_printfchar(d[i - 1] + 48), i--, count++;
		_printfchar(d[i] + 48), count++;
	}
	free(d);
	return (count);
}

